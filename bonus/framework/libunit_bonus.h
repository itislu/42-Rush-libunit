/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 10:13:27 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 15:50:08 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_BONUS_H
# define LIBUNIT_BONUS_H

# include <stdbool.h>

typedef struct s_libunit	t_libunit;

int			libunit_finish(t_libunit **libunit);
void		libunit_free(t_libunit **libunit);
bool		libunit_load(
				t_libunit *libunit, const char *name, int (*func)(void));
void		libunit_launch(t_libunit *libunit);
t_libunit	*libunit_new(void);
void		libunit_start_collection(t_libunit *libunit, const char *name);

#endif
