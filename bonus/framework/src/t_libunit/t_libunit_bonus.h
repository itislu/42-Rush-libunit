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

# include "libft/libft.h"
# include <stddef.h>

# define DEFAULT_TIMEOUT 1

typedef enum e_state
{
	STATE_OK = 0,
	STATE_NOT_OK = -1,
	STATE_ERROR = 1
}	t_state;

typedef struct s_stats
{
	unsigned int	n_tests;
	unsigned int	n_success;
	unsigned int	n_fail;
	unsigned int	n_crash;
}	t_stats;

typedef struct s_libunit
{
	const char		*name;
	size_t			max_name_len;
	unsigned int	timeout;
	int				log_fd;
	t_list			*tests;
	t_stats			total;
	t_state			state;
}	t_libunit;

#endif
