/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_test_start_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:56:47 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/30 15:50:18 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "colors_bonus.h"
#include <time.h>

void	prt_test_start(const char *collection_name)
{
	ft_printf("\n%sStarting %s%s%s test series...%s\n\n",
		BOLD,
		ITALIC,
		collection_name,
		RESET BOLD,
		RESET);
}

void	prt_test_start_log(const char *collection_name, int log_fd)
{
	struct tm	*datetime;
	time_t		timer;
	char		buffer[100];

	if (log_fd == -1)
		return ;
	time(&timer);
	datetime = localtime(&timer);
	strftime(buffer, sizeof buffer, "%Y-%m-%d %H:%M:%S", datetime);
	ft_dprintf(
		log_fd,
		"%s :: starting %s test series (runtime in s:ms:µs)\n",
		buffer,
		collection_name);
}
