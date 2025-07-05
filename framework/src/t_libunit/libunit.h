/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 10:13:27 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/05 14:28:49 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_UNIT_TEST_H
# define T_UNIT_TEST_H

#include "libft/libft.h"

typedef struct s_libunit
{
	const char	*name;
	t_list		*tests;
	unsigned	n_tests;
	unsigned	n_success;
}	t_libunit;

#endif
