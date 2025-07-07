/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 23:27:43 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/07 15:30:20 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include "utils_bonus.h"

static struct timespec	log_timer(struct timespec *now);
static struct timespec	subtract_timespec(struct timespec a, struct timespec b);
static long long		time_in_nanoseconds(struct timespec time);

void	start_log_timer(void)
{
	struct timespec	now;

	if (clock_gettime(1, &now) != 0)
		return ;
	log_timer(&now);
}

long long	get_log_runtime(void)
{
	struct timespec	now;
	long long		runtime_ms;

	if (clock_gettime(1, &now) != 0)
		return (-1);
	runtime_ms = time_in_nanoseconds(subtract_timespec(now, log_timer(NULL)));
	return (runtime_ms);
}

// subtract B from A
static struct timespec	subtract_timespec(struct timespec a, struct timespec b)
{
	struct timespec diff;

	diff.tv_sec = a.tv_sec - b.tv_sec;
	diff.tv_nsec = a.tv_nsec - b.tv_nsec;
	if (diff.tv_nsec < 0)
	{
		diff.tv_sec--;
		diff.tv_nsec += SEC_IN_NSEC;
	}
	return (diff);
}

static long long	time_in_nanoseconds(struct timespec time)
{
	long long	msec;

	msec = time.tv_sec * SEC_IN_NSEC;
	msec += time.tv_nsec;
	return (msec);
}

// can store (pass it a valid NOW struct) and return (pass NULL) the start time
static struct timespec	log_timer(struct timespec *now)
{
	static struct timespec	start_time;

	if (now)
		start_time = *now;
	return (start_time);
}
