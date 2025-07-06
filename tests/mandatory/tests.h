/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 08:29:59 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 12:58:14 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

int	ok(void);
int	ko(void);
int	sigsegv(void);
int	sigbus(void);
int	stack_overflow(void);
int	mmap_permissions(void);

#endif
