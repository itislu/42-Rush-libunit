/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 08:11:25 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 15:57:59 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit_bonus.h"
#include "tests_bonus.h"

void	ft_atoi_launcher(t_libunit *libunit)
{
	libunit_start_collection(libunit, "ft_atoi");
	libunit_load(libunit, "positive", positive);
	libunit_load(libunit, "negative", negative);
	libunit_load(libunit, "zero", zero);
	libunit_load(libunit, "leading_whitespace", leading_whitespace);
	libunit_load(libunit, "non_digit_leading", non_digit_leading);
	libunit_load(libunit, "non_digit_middle", non_digit_middle);
	libunit_load(libunit, "multi_sign", multi_sign);
	libunit_load(libunit, "empty", empty);
	libunit_load(libunit, "int_min", int_min);
	libunit_launch(libunit);
}
