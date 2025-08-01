/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_tests_result.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:52:12 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 08:24:30 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "launcher.h"

static const char	*result_as_string(t_result result)
{
	const char	*strings[] = {
		"OK",
		"KO",
		"SIGSEGV",
		"SIGBUS",
		"UNDEFINED"
	};

	return (strings[result]);
}

// print test result: [test_function]:[test_name]:[status]
void	prt_test_result(const char *collection, const char *test_name,
			t_result test_result)
{
	ft_printf("%s : %s : %s\n",
		collection,
		test_name,
		result_as_string(test_result));
}
