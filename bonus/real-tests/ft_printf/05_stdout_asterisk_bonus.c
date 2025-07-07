/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_stdout_asterisk_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 07:41:21 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 23:59:35 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include <stdio.h>
#include <string.h>

int	stdout_asterisk(void)
{
	if ((size_t) ft_printf("%-*.*s", 32, 4, "test_string") == 32)
		return (0);
	return (-1);
}
