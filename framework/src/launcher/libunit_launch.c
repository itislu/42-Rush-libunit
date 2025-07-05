/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_launch.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:04:45 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/05 17:37:45 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "libft/libft.h"
#include "t_libunit/t_unit_test.h"
#include "t_libunit/t_libunit.h"
#include "utils/utils.h"
#include "libunit_launch.h"
#include <stdbool.h>
#include <sys/wait.h>

static bool	launch_test(t_unit_test	*test);
static void	update_collection_stats(t_stats *collection, t_unit_test *test);
static void	update_total_stats(t_libunit *libunit, const t_stats *collection);

int	libunit_launch(t_libunit *libunit)
{
	t_unit_test	*test;
	t_list		*node;
	t_stats		collection_stats;
	int			result;

	result = 0;
	node = libunit->tests;
	while (test != NULL)
	{
		// TODO return type for launch_test & special task for fork failure
		if (!launch_test(node->content))
			result = -1;
		prt_single_test_result(libunit->name, node->content);
		update_collection_stats(&collection_stats, node->content);
		node = node->next;
	}
	ft_lstclear(&libunit->tests, unit_test_free);
	update_total_stats(libunit, &collection_stats);
	prt_total_stats(&collection_stats, libunit->name);
	return (result);
}

// Returns false if fork etc failed
static bool	launch_test(t_unit_test	*test)
{
	int			result;
	int			pid;
	int			status;
	t_result	test_res;

	pid = fork();
	if (pid == 0)
	{
		// TODO time out thread 
		status = test->func();
		// FIXME child cleanup!
		exit(status);
	}
	else if (pid > 0)
	{
		waitpid(pid, &status, 0);
		test->result = get_child_status(status);
	}
	else
		return (false);
	return (true);
}

static void	update_collection_stats(t_stats *collection, t_unit_test *test)
{
	if (test->result == R_OK)
		collection->n_success += 1;
	else if (test->result == R_KO)
		collection->n_fail += 1;
	else
		collection->n_crash += 1;
	collection->n_tests += 1;
}

static void	update_total_stats(t_libunit *libunit, const t_stats *collection)
{
	libunit->total.n_tests += collection->n_tests;
	libunit->total.n_success += collection->n_success;
	libunit->total.n_fail += collection->n_fail;
	libunit->total.n_crash += collection->n_crash;
}

/*
    libunit test launcher

        while test node
            fork
            if child run test
            if parent
                wait
                get result
                print result
                update struct success counter
            next node
        print collection result
        update total results in libunit struct

	In case of complete success, the routine exits returning 0.
	If at least one of the tests failed the routine returns -1.
*/
