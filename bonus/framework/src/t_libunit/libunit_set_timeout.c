/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_set_timeout.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:30:09 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/09 20:41:27 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_libunit_bonus.h"

void	libunit_set_timeout(t_libunit *libunit, unsigned int timeout)
{
	if (libunit == NULL)
		return ;
	libunit->timeout = timeout;
}
