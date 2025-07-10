/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_asterisk_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 07:41:21 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/10 10:26:04 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include <stdio.h>
#include <string.h>

int	asterisk(void)
{
	char	ft_buffer[128];
	char	og_buffer[128];
	int		ft_ret;
	int		og_ret;

	ft_ret = ft_snprintf(ft_buffer, sizeof(ft_buffer),
		"%-*.*s", 32, 4, "test_string");
	og_ret = snprintf(og_buffer, sizeof(og_buffer),
		"%-*.*s", 32, 4, "test_string");
	if (ft_ret == og_ret && strcmp(ft_buffer, og_buffer) == 0)
		return (0);
	return (-1);
}
