/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_stdout_left_aligned_bonus.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 07:41:17 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/10 09:58:52 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"

int	stdout_left_aligned(void)
{
	if (ft_printf("%-32s", "test_string") == 32)
		return (0);
	return (-1);
}
