/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                        		            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 10:13:27 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/05 14:28:49 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_UNIT_TEST_H
# define T_UNIT_TEST_H

#include "libft/libft.h"

typedef struct s_stats
{
	unsigned	n_tests;
	unsigned	n_success;
	unsigned	n_fail;
	unsigned	n_crash;
}	t_stats;

typedef struct s_libunit
{
	const char	*name;
	t_list		*tests;
	t_stats		total;
}	t_libunit;

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
