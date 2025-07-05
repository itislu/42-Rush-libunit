/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_unit_test.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 10:13:27 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/05 17:07:53 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_UNIT_TEST_H
# define T_UNIT_TEST_H

typedef struct s_unit_test	
{
	const char	*name;
	int			(*func)(void);
	t_result	result;
}	t_unit_test;

void	unit_test_free(void *content);
void	unit_test_init(t_unit_test *unit_test, const char *name, int (*func)(void));

#endif
