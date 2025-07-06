/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_total_stats_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 17:30:32 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 22:10:24 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "t_libunit/t_libunit_bonus.h"
#include "utils/colors_bonus.h"

// prints all stats of t_stats, works with collection & total stats
void	prt_total_stats(t_stats *stats, const char *name, int log_fd)
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
	if (log_fd == -1)
		return ;
	ft_dprintf(
		log_fd,
		"%s :: total %i :: success %i :: fail %i :: crash %i\n",
		name,
		stats->n_tests,
		stats->n_success,
		stats->n_fail,
		stats->n_crash);
}

/*

	STRLEN : 01_sth : OK
	STRLEN : 02_sth : KO
	STRLEN : 03_sth : KO

	STRLEN :: total tests 12 :: success 11 ...

	SUMMARY :: total tests 235 :: success 200 ...

*/
