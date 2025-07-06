/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launcher_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 16:25:43 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 22:56:55 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LAUNCHER_BONUS_H
# define LAUNCHER_BONUS_H

#include "t_libunit/t_libunit_bonus.h"
#include "t_libunit/t_unit_test_bonus.h"

typedef enum e_result
{
	TEST_OK,
	TEST_KO,
	TEST_SIGSEGV,
	TEST_SIGBUS,
	TEST_TIMEOUT,
	TEST_SIGILL,
	TEST_SIGABRT,
	TEST_SIGFPE,
	TEST_SIGPIPE,
	TEST_SIGOTHER,
	TEST_ERROR,
}	t_result;

t_result	get_child_status(void);
bool		test_basic(t_unit_test *test, t_result *test_result,
				t_libunit *libunit);
bool		test_stdout(t_unit_test *test, t_result *test_result,
				t_libunit *libunit);
void		handle_error(t_libunit *libunit, const char *test_name);

#endif
