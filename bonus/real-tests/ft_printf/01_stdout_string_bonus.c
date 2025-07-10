/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_stdout_string_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 07:41:11 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/10 10:17:32 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include <stdio.h>

int	stdout_string(void)
{
	int	ft_ret;
	int	og_ret;

	ft_ret = ft_printf("%s", "test_string");
	og_ret = snprintf(NULL, 0, "%s", "test_string");
	if (ft_ret == og_ret)
		return (0);
	return (-1);
}
