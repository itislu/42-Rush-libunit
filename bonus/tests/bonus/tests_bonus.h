/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 08:29:59 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 19:53:43 by mweghofe         ###   ########.fr       */
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
int	timeout(void);
int	sigill_ud2(void);
int	sigill_byte_inject(void);
int	sigill_trap(void);
int	sigabrt_abort(void);
int	sigabrt_assert(void);
int	sigfpe_div(void);
int	sigfpe_mod(void);
int	sigpipe_pipe(void);
int	sigpipe_socket(void);

#endif
