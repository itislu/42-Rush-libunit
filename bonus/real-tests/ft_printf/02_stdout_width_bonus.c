/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_stdout_width_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 07:41:15 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/10 09:58:46 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"

int	stdout_width(void)
{
	if (ft_printf("%32s", "test_string") == 32)
		return (0);
	return (-1);
}
