/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 17:34:30 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 22:50:13 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_BONUS_H
# define UTILS_BONUS_H

# include "t_libunit/t_libunit_bonus.h"
# include "launcher/launcher_bonus.h"

void	prt_test_start(const char *collection_name);
void	prt_test_start_log(const char *collection_name, int log_fd);
void	prt_test_result(t_libunit *libunit, const char *test_name,
			t_result test_result, int runtime_ms);
void	prt_total_stats(t_stats *stats, const char *name, int log_fd);
void	create_log(t_libunit *libunit);
void	start_log_timer();
long	get_log_runtime();

#endif
