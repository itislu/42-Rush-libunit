/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_stdout_asterisk_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 07:41:21 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/10 10:17:49 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include <stdio.h>

int	stdout_asterisk(void)
{
	int	ft_ret;
	int	og_ret;

	ft_ret = ft_printf("%-*.*s", 32, 4, "test_string");
	og_ret = snprintf(NULL, 0, "%-*.*s", 32, 4, "test_string");
	if (ft_ret == og_ret)
		return (0);
	return (-1);
}
