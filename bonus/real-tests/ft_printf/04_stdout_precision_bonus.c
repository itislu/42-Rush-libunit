/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_stdout_precision_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 07:41:19 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/10 10:17:45 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include <stdio.h>

int	stdout_precision(void)
{
	int	ft_ret;
	int	og_ret;

	ft_ret = ft_printf("%-32.4s", "test_string");
	og_ret = snprintf(NULL, 0, "%-32.4s", "test_string");
	if (ft_ret == og_ret)
		return (0);
	return (-1);
}
