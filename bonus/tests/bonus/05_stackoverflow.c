/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_stackoverflow.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 12:26:22 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 12:31:01 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	stack_overflow(void)
{
	if (ft_strlen("") == 0)
		stack_overflow();
	return (-1);
}
