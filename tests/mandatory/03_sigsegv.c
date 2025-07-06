/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_sigsegv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 11:14:55 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 12:24:06 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/mman.h>	// mmap()
#include <fcntl.h>		// open(), close(), unlink()
#include <unistd.h>		// truncate()

int	sigsegv(void)
{
	const char	*file;
	char		*file_in_mem;
	char		bus_err;
	int			fd;
	int			page_size;

	file = "/tmp/SIGBUS_TRIGGER";
	fd = open(file, O_CREAT | O_RDWR, 0644);
	if (fd == -1)
		return (-1);
	page_size = getpagesize();
	if (truncate(file, page_size * 3) == -1)
		return (-1);
	file_in_mem = mmap(NULL, page_size * 3, PROT_READ, MAP_SHARED, fd, 0);
	if (close(fd) == -1)
		return (-1);
	if (truncate(file, page_size) == -1)
		return (-1);
	unlink(file);
	bus_err = file_in_mem[(size_t) -1 / 2];
	return (-1);
}
