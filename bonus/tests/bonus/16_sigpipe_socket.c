/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16_sigpipe_socket.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:46:48 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 17:57:36 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/socket.h>
#include <unistd.h>

// uses a pair of sockets instead of a pipe
// they are bi-directional - doesn't matter which end to close
int	sigpipe_socket(void)
{
	int	sockets[2];

	if (socketpair(AF_UNIX, SOCK_STREAM, 0, sockets) == -1)
		return (-1);
	close(sockets[1]);
	write(sockets[0], "paired socket is closed", 23);
	return (-1);
}
