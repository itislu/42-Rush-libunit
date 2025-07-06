/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_test_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 22:49:41 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 22:50:08 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "t_unit_test.h"
#include <stdbool.h>

t_unit_test	*unit_test_new(const char *name, int (*func)(void))
{
	t_unit_test	*unit_test;

	unit_test = ft_calloc(1, sizeof(t_unit_test));
	if (unit_test == NULL)
		return (NULL);
	unit_test->name = name;
	unit_test->func = func;
	return (unit_test);
}
