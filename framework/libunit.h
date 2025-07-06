/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 10:13:27 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 09:49:21 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include "t_libunit/t_libunit.h"
# include <stdbool.h>

typedef struct s_libunit	t_libunit;

t_state		libunit_finish(t_libunit **libunit);
void		libunit_free(t_libunit **libunit);
bool		libunit_load(
				t_libunit *libunit, const char *name, int (*func)(void));
void		libunit_launch(t_libunit *libunit);
t_libunit	*libunit_new(void);
void		libunit_start_collection(t_libunit *libunit, const char *name);

#endif
