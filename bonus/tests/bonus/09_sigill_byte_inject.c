/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_sigill_byte_inject.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:21:34 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 17:26:34 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// injects raw single byte into binary, forces CPU to interpret it,
// no valid suffix -> invalid instruction fault
int	sigill_byte_inject(void)
{
	__asm__ volatile (".byte 0xFF");
	return (-1);
}
