/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 20:38:19 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 21:36:08 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "t_libunit/t_libunit_bonus.h"
#include "utils/colors_bonus.h"
#include <fcntl.h>
#include <unistd.h>
#include <time.h>

void	create_log(t_libunit *libunit)
{
	//TODO get a path from somewhere
	const char	*path;
	const char	*file;

	(void) path;
	file = ft_strjoin(libunit->name, ".log");
	libunit->log_fd = open(
		file,
		O_CREAT | O_APPEND | O_WRONLY,
		0644);
	if (libunit->log_fd == -1)
	{
		ft_dprintf(STDERR_FILENO, ITALIC"A log file couldn't be created. "\
			"The tests will continue normally.\n"RESET);
		return ;
	}
	ft_printf(ITALIC"Log file \'%s\' successfully created.\n\n"RESET, file);
}
#include <stdio.h>
static clock_t	log_timer(clock_t	cpu_time)
{
	static clock_t	start_clock;

	if (cpu_time > 0)
		start_clock = cpu_time;
	else if (cpu_time == 0)
		return (start_clock);
	else
		start_clock = 0;
	return (0);
}

void	start_log_timer()
{
	log_timer(clock());
}

int	get_log_runtime()
{
	clock_t		now;
	int		runtime_ms;

	now = clock();
	if (now == -1)
		return (-1);
	runtime_ms = (now - log_timer(0));
	return (runtime_ms);
}
