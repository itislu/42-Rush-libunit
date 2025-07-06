/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_stdout_width_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 07:41:15 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 23:30:58 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include <stdio.h>
#include <string.h>

int	stdout_width(void)
{
	if ((size_t) ft_printf("%32s", "test_string") == 32)
		return (0);
	return (-1);
}
