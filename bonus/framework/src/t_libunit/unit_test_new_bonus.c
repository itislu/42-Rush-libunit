/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_test_new_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 23:12:51 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 23:12:51 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "t_unit_test_bonus.h"
#include <stdbool.h>

t_unit_test	*unit_test_new(const char *name, int (*func)(void),
				t_test_type type, const char *expected_output)
{
	t_unit_test	*unit_test;

	unit_test = ft_calloc(1, sizeof(t_unit_test));
	if (unit_test == NULL)
		return (NULL);
	unit_test->name = name;
	unit_test->func = func;
	unit_test->type = type;
	unit_test->expected_output = expected_output;
	return (unit_test);
}
