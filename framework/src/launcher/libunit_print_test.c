/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_print_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:52:12 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/05 16:29:11 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "t_libunit/libunit.h"
#include "t_libunit/unit_test.h"
#include "libunit_launch.h"

static char	*result_as_string(t_result result)
{
	const char	*strings[] = {
		"OK",
		"KO",
		"SIGSEGV",
		"SIGBUS",
		"UNDEFINDED"
	};

	return (strings[result]);
}

void	prt_single_test_result(char *collection, t_unit_test *test)
{
	ft_printf("%s : %s : %s\n",
		collection,
		test->name,
		result_as_string(test->result));
}

// print test result: [test_function]:[test_name]:[status]
