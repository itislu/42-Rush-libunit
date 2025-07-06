/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_unit_test_bonus.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 10:13:27 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 15:50:08 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_UNIT_TEST_BONUS_H
# define T_UNIT_TEST_BONUS_H

typedef struct s_unit_test	
{
	const char	*name;
	int			(*func)(void);
}	t_unit_test;

void	unit_test_free(void *content);
void	unit_test_init(t_unit_test *unit_test, const char *name, int (*func)(void));

#endif
