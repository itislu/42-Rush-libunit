/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_start_collection_bonus.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 23:10:39 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 23:10:40 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "t_libunit_bonus.h"
#include "t_unit_test_bonus.h"

void	libunit_start_collection(t_libunit *libunit, const char *name)
{
	if (libunit == NULL)
		return ;
	ft_lstclear(&libunit->tests, unit_test_free);
	libunit->name = name;
	libunit->max_name_len = 0;
}
