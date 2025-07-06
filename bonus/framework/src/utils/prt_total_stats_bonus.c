/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_total_stats_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 17:30:32 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 16:28:39 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "t_libunit/t_libunit_bonus.h"
#include "utils/colors_bonus.h"

// prints all stats of t_stats, works with collection & total stats
void	prt_total_stats(t_stats *stats, const char *name)
{
	char	*line_format;
	bool	summary;

	summary = false;
	if (ft_strcmp(name, "SUMMARY") != 0)
		line_format = RESET DIM BOLD;
	else
	{
		line_format = RESET BOLD;
		summary = true;
	}
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
	if (summary)
		ft_printf("\n");
}

/*

	STRLEN : 01_sth : OK
	STRLEN : 02_sth : KO
	STRLEN : 03_sth : KO

	STRLEN :: total tests 12 :: success 11 ...

	SUMMARY :: total tests 235 :: success 200 ...

*/
