/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 09:04:35 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 16:58:36 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "launchers_bonus.h"
#include "libunit_bonus.h"

int	main(void)
{
	t_libunit	*libunit;

	libunit = libunit_new();
	bonus_launcher(libunit);
	return (libunit_finish(&libunit));
}
