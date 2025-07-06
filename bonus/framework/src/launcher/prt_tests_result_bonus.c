/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_tests_result_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:52:12 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 16:39:58 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "launcher_bonus.h"
#include "utils/colors_bonus.h"

static const char	*result_as_string(t_result result)
{
	const char	*strings[] = {
		GREEN"OK"RESET,
		YELLOW"KO"RESET,
		RED"SIGSEGV"RESET,
		RED"SIGBUS"RESET,
		YELLOW"TIMEOUT"RESET,
		RED"UNDEFINED"RESET
	};

	return (strings[result]);
}

// print test result: [test_function]:[test_name]:[status]
void	prt_test_result(const char *collection, const char *test_name,
			t_result test_result)
{
	ft_printf("%s%s%s : %s%s%s : %s%s\n",
		BOLD, collection, RESET,
		ITALIC, test_name, RESET,
		BOLD, result_as_string(test_result));
}
