/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_print_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:52:12 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/05 17:01:53 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "t_libunit/t_libunit.h"
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

// print test result: [test_function]:[test_name]:[status]
void	prt_single_test_result(char *collection, t_unit_test *test)
{
	ft_printf("%s : %s : %s\n",
		collection,
		test->name,
		result_as_string(test->result));
}

void	prt_collection_test_result(t_libunit *libunit)
{
	ft_printf("\n%s :: total tests %i :: success %i :: fails %i :: crash %i\n",
		libunit->name,
		libunit->total.n_tests,
		libunit->total.n_success,
		libunit->total.n_fail,
		libunit->total.n_crash);
}
