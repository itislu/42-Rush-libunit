/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_duplicate_flags.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 07:41:23 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 07:52:21 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include <stdio.h>
#include <string.h>

int	duplicate_flags(void)
{
	char	ft_buffer[128];
	char	og_buffer[128];

	ft_snprintf(ft_buffer, sizeof(ft_buffer), "%-##--#*.*x", 32, 4, 42);
	snprintf(og_buffer, sizeof(og_buffer), "%-##--#*.*x", 32, 4, 42);
	if (strcmp(ft_buffer, og_buffer) == 0)
		return (0);
	return (-1);
}
