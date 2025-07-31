/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_stdout_all_features_bonus.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 07:41:23 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/10 09:49:53 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include <limits.h>

int	stdout_all_features(void)
{
	if (ft_printf("%-2c %-4.2s-%-9p+%+01d#%- .0i.%-*.*u0%0#4x1%#-3.X%%*",
		'.', "", NULL, INT_MIN, INT_MAX, 10, 20, UINT_MAX, UINT_MAX, 0) == 79)
		return (0);
	return (-1);
}
