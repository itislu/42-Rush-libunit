/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_launch.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 16:25:43 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/05 16:27:29 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBUNIT_LAUNCH_H
# define LIBUNIT_LAUNCH_H

#include "t_libunit/unit_test.h"

typedef enum e_result
{
	R_OK,
	R_KO,
	R_SIGSEGV,
	R_SIGBUS,
	R_SIGOTHER,
}	t_result;


t_result	get_child_status(int status);
void		prt_single_test_result(char *collection, t_unit_test *test);

#endif