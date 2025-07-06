/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 07:45:27 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 23:30:22 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "launchers_bonus.h"
#include "libunit_bonus.h"

int	main(void)
{
	t_libunit	*libunit;

	libunit = libunit_new();
	ft_atoi_launcher(libunit);
	ft_snprintf_launcher(libunit);
	ft_printf_launcher(libunit);
	return (libunit_finish(&libunit));
}
