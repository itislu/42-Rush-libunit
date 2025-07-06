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

#ifndef T_LIBUNIT_BONUS_H
# define T_LIBUNIT_BONUS_H

#include "libft/libft.h"

typedef enum e_state
{
	STATE_OK = 0,
	STATE_NOT_OK = -1,
	STATE_ERROR = 1
}	t_state;

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
	t_state		state;
}	t_libunit;

#endif
