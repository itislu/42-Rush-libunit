/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_tests_result_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:52:12 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 20:49:50 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "launcher_bonus.h"
#include "t_libunit/t_libunit_bonus.h"
#include "utils/colors_bonus.h"

static const char	*result_as_string(t_result result);

// print test result: [test_function]:[test_name]:[status]
void	prt_test_result(t_libunit *libunit, const char *test_name,
			t_result test_result)
{
	ft_printf("%s%s%s : %-*s : %s%s\n",
		BOLD, libunit->name, RESET,
		(int)libunit->max_name_len, test_name,
		BOLD, result_as_string(test_result));
}

static const char	*result_as_string(t_result result)
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
