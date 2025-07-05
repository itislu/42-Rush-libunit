/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stats.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 17:30:32 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/05 17:41:01 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "launcher/launcher.h"

// prints all stats of t_stats, works with collection & total stats
void	prt_total_stats(t_stats *stats, char *name)
{
	ft_printf("\n%s :: total tests %i :: success %i :: fail %i :: crash %i\n",
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