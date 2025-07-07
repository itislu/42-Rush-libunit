/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_stdout_duplicate_flags_bonus.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 07:41:23 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/07 00:01:06 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include <stdio.h>
#include <string.h>

int	stdout_duplicate_flags(void)
{
	if ((size_t) ft_printf("%-##--#*.*x", 32, 4, 42) == 32)
		return (0);
	return (-1);
}
