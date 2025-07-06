/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_unit_test_bonus.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 10:13:27 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 16:34:21 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_UNIT_TEST_BONUS_H
# define T_UNIT_TEST_BONUS_H

typedef enum e_test_type
{
	TYPE_BASIC,
	TYPE_STDOUT,
}	t_test_type;

typedef struct s_unit_test	
{
	const char	*name;
	int			(*func)(void);
	t_test_type	type;
	const char	*expected_output;
}	t_unit_test;

void		unit_test_free(void *content);
t_unit_test	*unit_test_new(const char *name, int (*func)(void), 
				t_test_type type, const char *expected_output);

#endif
