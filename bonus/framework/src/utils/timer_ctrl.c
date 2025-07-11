/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timer_ctrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 23:27:43 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/30 15:22:53 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include "utils_bonus.h"

static struct timespec	log_timer(struct timespec *now);

void	start_log_timer(void)
{
	struct timespec	now;

	if (clock_gettime(CLOCK_MONOTONIC, &now) != 0)
		return ;
	log_timer(&now);
}

long long	get_log_runtime(void)
{
	struct timespec	now;
	long long		runtime_ns;

	if (clock_gettime(CLOCK_MONOTONIC, &now) != 0)
		return (-1);
	runtime_ns = time_in_nanoseconds(subtract_timespec(now, log_timer(NULL)));
	return (runtime_ns);
}

// can store (pass it a valid NOW struct) and return (pass NULL) the start time
static struct timespec	log_timer(struct timespec *now)
{
	static struct timespec	start_time;

	if (now)
		start_time = *now;
	return (start_time);
}
