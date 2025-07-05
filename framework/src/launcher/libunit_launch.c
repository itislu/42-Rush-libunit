/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_launch.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:04:45 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/05 16:09:28 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "libft/libft.h"
#include "t_libunit/unit_test.h"
#include "t_libunit/libunit.h"
#include <stdbool.h>
#include <sys/wait.h>

static bool	launch_test(t_unit_test	*test);
static void	update_stats(t_libunit *libunit, t_unit_test *test);

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

int	libunit_launch(t_libunit *libunit)
{
	t_unit_test	*test;
	t_list		*node;
	int			result;

	result = 0;
	node = libunit->tests;
	while (test != NULL)
	{
		// TODO different return type for launch_test & special task for fork failure
		if (!launch_test(node->content))
			result = -1;
		prt_single_test_result(libunit->name, node->content);
		update_stats(libunit, node->content);
		node = node->next;
	}
	ft_lstclear(&libunit->tests, unit_test_free);
	// TODO print collection result: SUCCES / TOTAL
	return (result);
}

// Returns false if fork etc failed
static bool	launch_test(t_unit_test	*test)
{
	int			result;
	int			pid;
	int			status;
	t_result	test_res;

	// fork
	pid = fork();
	if (pid == 0)
	{ // TODO time out thread 
		status = test->func();
		// TODO cleanup!
		exit(status);
	}
	else if (pid > 0)
	{
		waitpid(pid, &status, NULL);
		test->result = get_child_status(status);
	}
	else
		return (false);
	return (true);
}

static void	update_stats(t_libunit *libunit, t_unit_test *test)
{
	if (test->result == R_OK)
		libunit->n_success += 1;
}
