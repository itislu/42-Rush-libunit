/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 20:38:19 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 22:19:04 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "t_libunit/t_libunit_bonus.h"
#include "utils/colors_bonus.h"
#include <fcntl.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

void	create_log(t_libunit *libunit)
{
	char	*file;

	file = ft_strjoin(libunit->name, ".log");
	libunit->log_fd = open(
		file,
		O_CREAT | O_APPEND | O_WRONLY,
		0644);
	if (libunit->log_fd == -1)
	{
		ft_dprintf(STDERR_FILENO, ITALIC"A log file couldn't be created. "\
			"The tests will continue normally.\n"RESET);
		free(file);
		return ;
	}
	ft_printf(ITALIC"Log file \'%s\' successfully created.\n\n"RESET, file);
	free(file);
}

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
