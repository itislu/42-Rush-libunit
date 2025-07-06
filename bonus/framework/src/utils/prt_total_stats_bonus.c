/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_total_stats_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 17:30:32 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 20:32:51 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "t_libunit/t_libunit_bonus.h"
#include "utils/colors_bonus.h"

// prints all stats of t_stats, works with collection & total stats
void	prt_total_stats(t_stats *stats, const char *name)
{
	const char	*line_format = RESET BOLD;

	ft_printf("\n%s%s%s :: total %i :: %ssuccess%s %i :: "\
		"%sfail%s %i :: %scrash%s %i%s\n",
		BOLD, name, line_format,
		stats->n_tests,
		GREEN, line_format,
		stats->n_success,
		YELLOW, line_format,
		stats->n_fail,
		RED, line_format,
		stats->n_crash, RESET);
	ft_printf("\n");
}

/*

	STRLEN : 01_sth : OK
	STRLEN : 02_sth : KO
	STRLEN : 03_sth : KO

	STRLEN :: total tests 12 :: success 11 ...

	SUMMARY :: total tests 235 :: success 200 ...

*/
