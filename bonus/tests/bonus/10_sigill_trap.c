/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_sigill_trap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:00:16 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 17:30:02 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compiles on x86 architecture into 'ud2'
// actual asm is architecture specific but always designed to raise fatal signal
int	sigill_trap(void)
{
	__builtin_trap();
	return (-1);
}
