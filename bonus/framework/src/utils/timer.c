/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 23:27:43 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/07 14:33:30 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/time.h>
#include "utils_bonus.h"

static struct timeval	log_timer(struct timeval *now);
static struct timeval	subtract_timeval(struct timeval a, struct timeval b);
static int				time_in_milliseconds(struct timeval time);

void	start_log_timer(void)
{
	struct timeval	now;

	if (gettimeofday(&now, NULL) != 0)
		return ;
	log_timer(&now);
}

int	get_log_runtime(void)
{
	struct timeval	now;
	int				runtime_ms;

	if (gettimeofday(&now, NULL) != 0)
		return (-1);
	runtime_ms = time_in_milliseconds(subtract_timeval(now, log_timer(NULL)));
	return (runtime_ms);
}

// subtract B from A
static struct timeval	subtract_timeval(struct timeval a, struct timeval b)
{
	struct timeval diff;

	diff.tv_sec = a.tv_sec - b.tv_sec;
	diff.tv_usec = a.tv_usec - b.tv_usec;
	if (diff.tv_usec < 0)
	{
		diff.tv_sec--;
		diff.tv_usec += SEC_IN_USEC;
	}
	return (diff);
}

static int	time_in_milliseconds(struct timeval time)
{
	long long	msec;

	msec = time.tv_sec * SEC_IN_MSEC;
	msec += time.tv_usec / MSEC_IN_USEC;
	return (msec);
}

// can store (pass it a valid NOW struct) and return (pass NULL) the start time
static struct timeval	log_timer(struct timeval *now)
{
	static struct timeval	start_time;

	if (now)
		start_time = *now;
	return (start_time);
}
