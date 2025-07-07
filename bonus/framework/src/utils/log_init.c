/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 20:38:19 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 23:29:48 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "libft/libft.h"
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
	if (file != NULL)
		libunit->log_fd = open(
				file,
				O_CREAT | O_APPEND | O_WRONLY,
				0644);
	if (file == NULL || libunit->log_fd == -1)
	{
		ft_dprintf(STDERR_FILENO, ITALIC"A log file couldn't be created. "\
			"The tests will continue normally.\n"RESET);
		free(file);
		return ;
	}
	ft_printf(ITALIC"Log file \'%s\' successfully created.\n\n"RESET, file);
	free(file);
}
