/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_stdout_asterisk_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 07:41:21 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/10 09:59:03 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"

int	stdout_asterisk(void)
{
	if (ft_printf("%-*.*s", 32, 4, "test_string") == 32)
		return (0);
	return (-1);
}
