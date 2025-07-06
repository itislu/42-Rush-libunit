/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_sigabrt_assert.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:11:01 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 17:13:52 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>

// assert prints to stderr
int	sigabrt_assert(void)
{
	assert(0);
	return (-1);
}
