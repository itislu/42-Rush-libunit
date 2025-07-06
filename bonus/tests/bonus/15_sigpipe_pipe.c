/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15_sigpipe_pipe.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:37:32 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 17:46:39 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	sigpipe_pipe(void)
{
	int	pipe_fd[2];

	if (pipe(pipe_fd) == -1)
		return (-1);
	close(pipe_fd[0]);
	write(pipe_fd[1], "pipe read end is closed", 23);
	return (-1);
}
