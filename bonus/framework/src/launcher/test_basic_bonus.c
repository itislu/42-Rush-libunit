/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_basic_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 18:12:51 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 23:20:24 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "launcher_bonus.h"
#include "libunit_bonus.h"
#include "t_libunit/t_libunit_bonus.h"
#include "t_libunit/t_unit_test_bonus.h"
#include "utils/utils_bonus.h"
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

// Returns false if fork etc failed
bool	test_basic(t_unit_test *test, t_result *test_result,
			t_libunit *libunit)
{
	int	pid;
	int	status;
	int	(*func)(void);

	const unsigned timeout = libunit->timeout;
	func = test->func;
	pid = fork();
	if (pid == -1)
		return (false);
	if (pid == 0)
	{
		libunit_free(&libunit);
		alarm(timeout);
		status = func();
		exit(status);
	}
	start_log_timer();
	*test_result = get_child_status();
	test->runtime_ms = get_log_runtime();
	if (*test_result == TEST_ERROR)
		return (false);
	return (true);
}
