/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 10:13:27 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/05 15:37:31 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <stdbool.h>

typedef struct s_libunit	t_libunit;

int			libunit_finish(t_libunit **libunit);
void		libunit_free(t_libunit **libunit);
bool		libunit_load(
				t_libunit *libunit, const char *name, int (*func)(void));
t_libunit	*libunit_new(void);
void		libunit_start_collection(t_libunit *libunit, const char *name);

#endif
