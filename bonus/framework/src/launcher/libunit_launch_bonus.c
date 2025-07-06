/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_launch_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:04:45 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 16:43:49 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "libft/libft.h"
#include "t_libunit/t_unit_test_bonus.h"
#include "t_libunit/t_libunit_bonus.h"
#include "utils/utils_bonus.h"
#include "launcher_bonus.h"
#include "libunit_bonus.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/wait.h>

static bool	launch_test(t_unit_test	*test, t_result *test_result,
				t_libunit *libunit);
static void	update_collection_stats(t_stats *collection, t_result result);
static void	update_total_stats(t_libunit *libunit, const t_stats *collection);
static void	prt_error(const char *collection_name, const char *test_name);

void	libunit_launch(t_libunit *libunit)
{
	t_unit_test	*test;
	t_list		*node;
	t_stats		collection_stats;
	t_result	result;

	if (libunit == NULL)
		return ;
	ft_bzero(&collection_stats, sizeof collection_stats);
	node = libunit->tests;
	ft_printf("\n"); // TODO can wrap in function or not... separation line
	while (node != NULL)
	{
		test = node->content;
		if (!launch_test(test, &result, libunit))
		{
			prt_error(libunit->name, test->name);
			ft_lstclear(&libunit->tests, unit_test_free);
			return ;
		}
		prt_test_result(libunit->name, test->name, result);
		update_collection_stats(&collection_stats, result);
		node = node->next;
	}
	ft_lstclear(&libunit->tests, unit_test_free);
	update_total_stats(libunit, &collection_stats);
	prt_total_stats(&collection_stats, libunit->name);
}

// Returns false if fork etc failed
static bool	launch_test(t_unit_test	*test, t_result *test_result,
				t_libunit *libunit)
{
	int			pid;
	int			status;
	int			(*func)(void);

	func = test->func;
	pid = fork();
	if (pid == -1)
	{
		libunit->state = STATE_ERROR;
		return (false);
	}
	if (pid == 0)
	{
		alarm(libunit->timeout);
		libunit_free(&libunit);
		status = func();
		exit(status);
	}
	else
	{
		wait(&status);
		*test_result = get_child_status(status);
	}
	return (true);
}

static void	update_collection_stats(t_stats *collection, t_result result)
{
	if (result == TEST_OK)
		collection->n_success += 1;
	else if (result == TEST_KO || result == TEST_TIMEOUT)
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
	if (libunit->state == STATE_OK
		&& libunit->total.n_tests != libunit->total.n_success)
	{
		libunit->state = STATE_NOT_OK;
	}
}

static void	prt_error(const char *collection_name, const char *test_name)
{
	ft_dprintf(STDERR_FILENO,
		"\nERROR: An error occuring during test-launch-execution for %s:%s. "
		"The %s collection of tests will abort. "
		"If there are any more collections, they will continue.\n\n",
		collection_name, test_name, collection_name);
}
