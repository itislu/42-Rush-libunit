/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_set_timeout.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:30:09 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 16:31:16 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_libunit_bonus.h"

void	libunit_set_timeout(t_libunit *libunit, unsigned timeout)
{
	libunit->timeout = timeout;
}
