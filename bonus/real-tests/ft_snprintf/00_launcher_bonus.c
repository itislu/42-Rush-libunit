/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 07:40:59 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/10 10:45:59 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit_bonus.h"
#include "tests_bonus.h"

void	ft_snprintf_launcher(t_libunit *libunit)
{
	libunit_start_collection(libunit, "ft_snprintf");
	libunit_load(libunit, "string", string);
	libunit_load(libunit, "width", width);
	libunit_load(libunit, "left_aligned", left_aligned);
	libunit_load(libunit, "precision", precision);
	libunit_load(libunit, "asterisk", asterisk);
	libunit_load(libunit, "all_features", all_features);
	libunit_load(libunit, "null_buffer", null_buffer);
	libunit_launch(libunit);
}
