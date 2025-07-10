/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_stdout_width_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 07:41:15 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/10 10:17:38 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include <stdio.h>

int	stdout_width(void)
{
	int	ft_ret;
	int	og_ret;

	ft_ret = ft_printf("%32s", "test_string");
	og_ret = snprintf(NULL, 0, "%32s", "test_string");
	if (ft_ret == og_ret)
		return (0);
	return (-1);
}
