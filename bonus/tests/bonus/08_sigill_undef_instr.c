/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_sigill_undef_instr.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:59:05 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 17:33:51 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// uses 'undefined instruction #2' which is designed to trigger invalid instruct
int	sigill_undef_instr(void)
{
	__asm__ volatile ("ud2");
	return (-1);
}
