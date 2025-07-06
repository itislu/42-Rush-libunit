/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 09:04:35 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 15:49:05 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "launchers_bonus.h"
#include "libunit_bonus.h"

int	main(void)
{
	t_libunit	*libunit;

	libunit = libunit_new();
	mandatory_launcher(libunit);
	return (libunit_finish(&libunit));
}
