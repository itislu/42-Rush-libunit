/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_launch.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:04:45 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/05 18:48:55 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "libft/libft.h"
#include "t_libunit/t_unit_test.h"
#include "t_libunit/t_libunit.h"
#include "utils/utils.h"
#include "launcher.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/wait.h>

static t_result	launch_test(t_unit_test	*test);
static void		update_collection_stats(t_stats *collection, t_result result);
static void		update_total_stats(t_libunit *libunit,
					const t_stats *collection);

int	libunit_launch(t_libunit *libunit)
{
	t_unit_test	*test;
	t_list		*node;
	t_stats		collection_stats;
	t_result	result;

	result = R_OK;
	ft_bzero(&collection_stats, sizeof collection_stats);
	node = libunit->tests;
	while (node != NULL)
	{
		test = node->content;
		result = launch_test(test);
		if (result == R_ERR_FORK)
			break ;
		prt_test_result(libunit->name, test->name, result);
		update_collection_stats(&collection_stats, result);
		node = node->next;
	}
	ft_lstclear(&libunit->tests, unit_test_free);
	if (result == R_ERR_FORK)
		return (result);
	update_total_stats(libunit, &collection_stats);
	prt_total_stats(&collection_stats, libunit->name);
	return (result);
}

// Returns false if fork etc failed
static t_result	launch_test(t_unit_test	*test)
{
	int			pid;
	int			status;
	int			(*func)(void);

	func = test->func;
	pid = fork();
	if (pid == 0)
	{
		// TODO time out thread 
		status = func(); // [ ] maybe cleanup fixed with (*func)(void) local variable
		exit(status);
	}
	else if (pid > 0)
	{
		waitpid(pid, &status, 0);
		return (get_child_status(status));
	}
	else
		return (R_ERR_FORK);
}

static void	update_collection_stats(t_stats *collection, t_result result)
{
	if (result == R_OK)
		collection->n_success += 1;
	else if (result == R_KO)
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
