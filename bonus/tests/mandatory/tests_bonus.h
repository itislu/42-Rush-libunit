/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 08:29:59 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 15:50:08 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_BONUS_H
# define TESTS_BONUS_H

int	ok(void);
int	ko(void);
int	sigsegv(void);
int	sigbus(void);
int	stack_overflow(void);
int	mmap_permissions(void);

#endif
