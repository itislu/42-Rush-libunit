/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timer_calc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 15:40:16 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/07 15:56:25 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include "utils_bonus.h"

// subtract B from A
struct timespec	subtract_timespec(struct timespec a, struct timespec b)
{
	struct timespec	diff;

	diff.tv_sec = a.tv_sec - b.tv_sec;
	diff.tv_nsec = a.tv_nsec - b.tv_nsec;
	if (diff.tv_nsec < 0)
	{
		diff.tv_sec--;
		diff.tv_nsec += SEC_IN_NSEC;
	}
	return (diff);
}

long long	time_in_nanoseconds(struct timespec time)
{
	long long	nsec;

	nsec = time.tv_sec * SEC_IN_NSEC;
	nsec += time.tv_nsec;
	return (nsec);
}

// convert nanoseconds NSEC into structure t_time T (SS:3MS:3US:3NS)
void	convert_nanoseconds(long long nsec, t_time *t)
{
	if (nsec == -1)
	{
		ft_bzero(t, sizeof (t_time));
		return ;
	}
	t->sec = nsec / SEC_IN_NSEC;
	t->msec = (nsec % SEC_IN_NSEC) / MSEC_IN_NSEC;
	t->usec = (nsec % MSEC_IN_NSEC) / USEC_IN_NSEC;
	t->nsec = nsec % USEC_IN_NSEC;
}
