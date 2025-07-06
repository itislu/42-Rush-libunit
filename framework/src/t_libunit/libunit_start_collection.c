/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_start_collection.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 22:48:43 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 22:48:44 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_libunit.h"

void	libunit_start_collection(t_libunit *libunit, const char *name)
{
	if (libunit == NULL)
		return ;
	libunit->name = name;
	libunit->tests = NULL;
}
