/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_null_buffer_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 07:41:23 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/10 10:45:30 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	null_buffer(void)
{
	int		ft_ret;
	int		og_ret;

	ft_ret = ft_snprintf(NULL, 0,
		"%-2c %-4.2s-%-9p+%+01d#%- .0i.%-*.*u0%0#4x1%#-3.X%%*",
		'.', "", NULL, INT_MIN, INT_MAX, 10, 20, UINT_MAX, UINT_MAX, 0);
	og_ret = snprintf(NULL, 0, 
		"%-2c %-4.2s-%-9p+%+01d#%- .0i.%-*.*u0%0#4x1%#-3.X%%*",
		'.', "", NULL, INT_MIN, INT_MAX, 10, 20, UINT_MAX, UINT_MAX, 0);
	if (ft_ret == og_ret)
		return (0);
	return (-1);
}
