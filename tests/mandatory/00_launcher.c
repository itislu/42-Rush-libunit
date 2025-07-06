/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 09:06:24 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 12:28:56 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "tests.h"

// #ifdef TEST_KO
void	mandatory_launcher(t_libunit *libunit)
{
	libunit_start_collection(libunit, "mandatory");
	libunit_load(libunit, "ok", ok);
	libunit_load(libunit, "ko", ko);
	libunit_load(libunit, "sigsegv", sigsegv);
	libunit_load(libunit, "sigbus", sigbus);
	libunit_load(libunit, "stack overflow", stack_overflow);
	libunit_launch(libunit);
}
// else
// void	mandatory_launcher(void)
// {
// 	return (0);
// }
// #endif
