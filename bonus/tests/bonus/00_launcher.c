/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 09:06:24 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 17:17:12 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit_bonus.h"
#include "tests_bonus.h"

// #ifdef TEST_KO
void	bonus_launcher(t_libunit *libunit)
{
	libunit_start_collection(libunit, "bonus");
	libunit_load(libunit, "ok", ok);
	libunit_load(libunit, "ko", ko);
	libunit_load(libunit, "sigsegv", sigsegv);
	libunit_load(libunit, "sigbus", sigbus);
	libunit_load(libunit, "stack_overflow", stack_overflow);
	libunit_load(libunit, "mmap_permissions", mmap_permissions);
	libunit_load(libunit, "timeout", timeout);
	libunit_load(libunit, "sigill_asm", sigill_asm);
	libunit_load(libunit, "sigill_trap", sigill_trap);
	libunit_load(libunit, "sigabrt_abort", sigabrt_abort);
	libunit_load(libunit, "sigabrt_assert", sigabrt_assert);
	libunit_load(libunit, "sigfpe_div", sigfpe_div);
	libunit_load(libunit, "sigfpe_mod", sigfpe_mod);
	libunit_launch(libunit);
}
