/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_launch.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 16:25:43 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/05 17:01:57 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_LAUNCH_H
# define LIBUNIT_LAUNCH_H

# include "t_libunit/unit_test.h"
# include "t_libunit/t_libunit.h"

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
void		prt_collection_test_result(t_libunit *libunit);

#endif