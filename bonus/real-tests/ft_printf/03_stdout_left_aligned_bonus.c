/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_stdout_left_aligned_bonus.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 07:41:17 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 23:53:41 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include <stdio.h>
#include <string.h>

int	stdout_left_aligned(void)
{
	if ((size_t) ft_printf("%-32s", "test_string") == 32)
		return (0);
	return (-1);
}
