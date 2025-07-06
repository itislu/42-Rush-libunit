/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_child_status_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:43:06 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 17:09:42 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "launcher_bonus.h"
#include <signal.h>
#include <sys/wait.h>

static t_result	exited_normally(int w_exitstat)
{
	if (w_exitstat != 0)
		return (TEST_KO);
	else
		return (TEST_OK);
}

static t_result	terminated_by_signal(int w_termsig)
{
	if (w_termsig == SIGSEGV)
		return (TEST_SIGSEGV);
	else if (w_termsig == SIGBUS)
		return (TEST_SIGBUS);
	else if (w_termsig == SIGALRM)
		return (TEST_TIMEOUT);
	else if (w_termsig == SIGILL)
		return (TEST_SIGILL);
	else if (w_termsig == SIGABRT)
		return (TEST_SIGABRT);
	else if (w_termsig == SIGFPE)
		return (TEST_SIGFPE);
	else if (w_termsig == SIGPIPE)
		return (TEST_SIGPIPE);
	else
		return (TEST_SIGOTHER);
}

t_result	get_child_status(int status)
{
	if (WIFEXITED(status))
		return (exited_normally(WEXITSTATUS(status)));
	else if (WIFSIGNALED(status))
		return (terminated_by_signal(WTERMSIG(status)));
	else
		return (TEST_SIGOTHER);
}

/*
	get_status covers:
	1) exited normally
	2) terminated by signal
	3) stopped or continued
*/
