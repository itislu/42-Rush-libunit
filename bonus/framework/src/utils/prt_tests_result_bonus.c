/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_tests_result_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:52:12 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/07 15:53:51 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "launcher/launcher_bonus.h"
#include "t_libunit/t_libunit_bonus.h"
#include "utils/colors_bonus.h"
#include "utils/utils_bonus.h"
#include <stdio.h>

static const char	*result_as_string_colored(t_result result);
static const char	*result_as_string(t_result result);

// print test result: [test_function]:[test_name]:[status]
void	prt_test_result(t_libunit *libunit, const char *test_name,
			t_result test_result, long long runtime_ns)
{
	t_time	time;

	convert_nanoseconds(runtime_ns, &time);
	ft_printf("%s%s%s : %-*s : %s%s\n",
		BOLD, libunit->name, RESET,
		(int)libunit->max_name_len, test_name,
		BOLD, result_as_string_colored(test_result));
	if (libunit->log_fd == -1)
		return ;
	dprintf(libunit->log_fd,
		"%s : %-*s : %s : runtime %02i:%03i:%03i:%03i (%lli ns)\n",
		libunit->name,
		(int)libunit->max_name_len, test_name,
		result_as_string(test_result),
		time.sec, time.msec, time.usec, time.nsec,
		runtime_ns);
}

static const char	*result_as_string_colored(t_result result)
{
	const char	*strings[] = {
		GREEN"OK"RESET,
		YELLOW"KO"RESET,
		RED"SIGSEGV"RESET,
		RED"SIGBUS"RESET,
		YELLOW"TIMEOUT"RESET,
		RED"SIGILL"RESET,
		RED"SIGABRT"RESET,
		RED"SIGFPE"RESET,
		RED"SIGPIPE"RESET,
		RED"UNDEFINED"RESET
	};

	return (strings[result]);
}

static const char	*result_as_string(t_result result)
{
	const char	*strings[] = {
		"OK",
		"KO",
		"SIGSEGV",
		"SIGBUS",
		"TIMEOUT",
		"SIGILL",
		"SIGABRT",
		"SIGFPE",
		"SIGPIPE",
		"UNDEFINED"
	};

	return (strings[result]);
}
