/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_free_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 23:13:15 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 23:13:15 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libunit_bonus.h"
#include "t_libunit_bonus.h"
#include "t_unit_test_bonus.h"

void	libunit_free(t_libunit **libunit)
{
	if (libunit == NULL || *libunit == NULL)
		return ;
	ft_lstclear(&(*libunit)->tests, unit_test_free);
	ft_free_and_null((void **)libunit);
}
