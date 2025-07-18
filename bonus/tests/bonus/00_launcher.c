/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 09:06:24 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/10 00:46:25 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit_bonus.h"
#include "tests_bonus.h"

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
	libunit_load(libunit, "sigill_ud2", sigill_ud2);
	libunit_load(libunit, "sigill_byte_inject", sigill_byte_inject);
	libunit_load(libunit, "sigill_trap", sigill_trap);
	libunit_load(libunit, "sigabrt_abort", sigabrt_abort);
	libunit_load(libunit, "sigfpe_div", sigfpe_div);
	libunit_load(libunit, "sigfpe_mod", sigfpe_mod);
	libunit_load(libunit, "sigpipe_pipe", sigpipe_pipe);
	libunit_load(libunit, "sigpipe_socket", sigpipe_socket);
	libunit_load_stdout(libunit, "stdout_ok_match", stdout_ok,
		"stop here -->   ");
	libunit_load_stdout(libunit, "stdout_ok_mismatch", stdout_ok,
		"stop here --><--");
	libunit_load_stdout(libunit, "stdout_ok_len_mismatch", stdout_ok,
		"stop here -->    ");
	libunit_load_stdout(libunit, "stdout_ko_match", stdout_ko,
		"stop here -->   ");
	libunit_load_stdout(libunit, "stdout_ko_mismatch", stdout_ko,
		"stop here --><--");
	libunit_launch(libunit);
}

// libunit_load(libunit, "sigabrt_assert", sigabrt_assert);
