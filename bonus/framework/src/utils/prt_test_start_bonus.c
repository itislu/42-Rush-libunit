/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_test_start_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:56:47 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 20:38:16 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "colors_bonus.h"

void	prt_test_start(const char *collection_name)
{
	ft_printf("\n%sStarting %s%s%s test series...%s\n\n",
		BOLD,
		ITALIC,
		collection_name,
		RESET BOLD,
		RESET);
}
