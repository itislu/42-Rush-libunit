/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 17:34:30 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/07 15:50:16 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_BONUS_H
# define UTILS_BONUS_H

# include "t_libunit/t_libunit_bonus.h"
# include "launcher/launcher_bonus.h"

# define SEC_IN_MSEC 1000			// 1 sec in millisec (ms)
# define SEC_IN_USEC 1000000		// 1 sec in microsec (µs/us)
# define SEC_IN_NSEC 1000000000LL	// 1 second in nanosec (ns)
# define MSEC_IN_USEC 1000			// 1 millisec in microsec
# define USEC_IN_NSEC 1000			// 1 microsec in nanosec
# define MSEC_IN_NSEC 1000000		// 1 millisec in nanosec

typedef struct s_time
{
	int sec;	// seconds
	int	msec;	// milliseconds
	int	usec;	// microseconds
	int	nsec;	// nanoseconds
}	t_time;

void			prt_test_start(const char *collection_name);
void			prt_test_start_log(const char *collection_name, int log_fd);
void			prt_test_result(t_libunit *libunit, const char *test_name,
					t_result test_result, long long runtime_ms);
void			prt_total_stats(t_stats *stats, const char *name, int log_fd);
void			create_log(t_libunit *libunit);
void			start_log_timer(void);
long long		get_log_runtime(void);
struct timespec	subtract_timespec(struct timespec a, struct timespec b);
long long		time_in_nanoseconds(struct timespec time);
void			convert_nanoseconds(long long nsec, t_time *t);

#endif
