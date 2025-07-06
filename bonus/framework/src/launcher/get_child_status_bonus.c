/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_child_status_bonus_bonus.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:43:06 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 15:44:47 by ldulling         ###   ########.fr       */
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
