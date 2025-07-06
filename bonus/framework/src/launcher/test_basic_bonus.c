/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_basic_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 18:12:51 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 19:30:31 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "launcher_bonus.h"
#include "libunit_bonus.h"
#include "t_libunit/t_libunit_bonus.h"
#include "t_libunit/t_unit_test_bonus.h"
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

// Returns false if fork etc failed
bool	test_basic(t_unit_test *test, t_result *test_result,
			t_libunit *libunit)
{
	int				(* const func)(void) = test->func;
	const unsigned	timeout = libunit->timeout;
	int				pid;
	int				status;

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
	*test_result = get_child_status();
	if (*test_result == TEST_ERROR)
		return (false);
	return (true);
}
