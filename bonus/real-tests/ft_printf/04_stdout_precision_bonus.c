/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_stdout_precision_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 07:41:19 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 23:58:07 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include <stdio.h>
#include <string.h>

int	stdout_precision(void)
{
	if ((size_t) ft_printf("%-32.4s", "test_string") == 32)
		return (0);
	return (-1);
}
