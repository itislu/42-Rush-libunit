/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_test_start_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:56:47 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 16:21:41 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "colors_bonus.h"

void	prt_test_start(void)
{
	ft_printf("\n%sStarting new %slibunit%s test series...%s\n\n",
		BOLD,
		ITALIC,
		RESET BOLD,
		RESET);
}
