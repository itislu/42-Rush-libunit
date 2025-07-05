/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_launch_status.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:43:06 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/05 15:45:39 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_libunit/libunit.h"
# include <signal.h>

static t_result	exited_normally(int w_exitstat)
{
	if (w_exitstat != 0)
		return (R_KO);
	else
		return (R_OK);
}

static t_result	terminated_by_signal(int w_termsig)
{
	if (w_termsig == SIGSEGV)
		return (R_SIGSEGV);
	else if (w_termsig == SIGBUS)
		return (R_SIGBUS);
	else
		return (R_SIGOTHER);
}

t_result	get_child_status(int status)
{
	int	last_status;

	if (WIFEXITED(status))
		return (exited_normally(WEXITSTATUS(status)));
	else if (WIFSIGNALED(status))
		return (terminated_by_signal(WTERMSIG(status)));
	else
		return (R_SIGOTHER);
}

/*
	get_status covers:
	1) exited normally
	2) terminated by signal
	3) stopped or continued
*/
