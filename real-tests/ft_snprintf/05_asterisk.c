/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_asterisk.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 07:41:21 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 07:41:22 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include <stdio.h>
#include <string.h>

int	asterisk(void)
{
	char	ft_buffer[128];
	char	og_buffer[128];

	ft_snprintf(ft_buffer, sizeof(ft_buffer), "%-*.*s", 32, 4, "test_string");
	snprintf(og_buffer, sizeof(og_buffer), "%-*.*s", 32, 4, "test_string");
	if (strcmp(ft_buffer, og_buffer) == 0)
		return (0);
	return (-1);
}
