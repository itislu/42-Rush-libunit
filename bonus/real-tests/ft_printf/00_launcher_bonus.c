/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 07:40:59 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/10 09:49:40 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit_bonus.h"
#include "tests_bonus.h"

void	ft_printf_launcher(t_libunit *libunit)
{
	libunit_start_collection(libunit, "ft_printf");
	libunit_load_stdout(libunit, "stdout_string", stdout_string, "test_string");
	libunit_load_stdout(
		libunit, "stdout_width", stdout_width,
		"                     test_string");
	libunit_load_stdout(
		libunit, "stdout_left_aligned", stdout_left_aligned,
		"test_string                     ");
	libunit_load_stdout(
		libunit, "stdout_precision", stdout_precision,
		"test                            ");
	libunit_load_stdout(
		libunit, "stdout_asterisk", stdout_asterisk,
		"test                            ");
	libunit_load_stdout(
		libunit, "stdout_all_features", stdout_all_features,
		".      -(nil)    +-2147483648# 2147483647.000000000042949672950"
		"0xffffffff1   %*");
	libunit_launch(libunit);
}
