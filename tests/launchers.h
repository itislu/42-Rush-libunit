/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launchers.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 08:17:41 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/05 21:43:39 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LAUNCHERS_H
# define LAUNCHERS_H

#include "libunit.h"

int KO_launcher(t_libunit *libunit);
int OK_launcher(t_libunit *libunit);
int SIGBUS_launcher(t_libunit *libunit);
int SIGSEGV_launcher(t_libunit *libunit);

#endif
