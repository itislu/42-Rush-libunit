/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 09:04:35 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 09:16:35 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "launchers.h"
#include "libunit.h"

int	main(void)
{
	t_libunit	*libunit;

	libunit = libunit_new();
	mandatory_launcher(libunit);
	return (libunit_finish(&libunit));
}
