/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isoverflow_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:39:46 by ldulling          #+#    #+#             */
/*   Updated: 2025/03/04 04:03:27 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/**
 * The ft_isoverflow_int function checks if the passed string represents a
 * number that would cause an overflow if converted to an integer.
 *
 * The function skips any leading whitespace and checks for a sign character
 * ('+' or '-').
 * It then compares the number part of the string with the maximum positive
 * integer value (2147483647) or the maximum negative integer value
 * (-2147483648) depending on the sign.
 *
 * @param nptr    The NULL-terminated string to check.
 *
 * @return        Returns true if the string represents a number that would
 *                cause an overflow, false otherwise.
 */
bool	ft_isoverflow_int(const char *nptr)
{
	unsigned int	i;
	const char		*int_max;
	unsigned int	int_max_len;
	unsigned int	num_len;

	i = 0;
	while (nptr[i] != '\0' && ft_strchr(WHITESPACE, nptr[i]) != NULL)
		i++;
	if (nptr[i] == '-')
		int_max = "2147483648";
	else
		int_max = "2147483647";
	int_max_len = ft_strlen(int_max);
	if (ft_issign(nptr[i]))
		i++;
	while (nptr[i] == '0')
		i++;
	num_len = 0;
	while (ft_isdigit(nptr[i + num_len]))
		num_len++;
	if ((num_len == int_max_len && ft_strncmp(&nptr[i], int_max, num_len) > 0)
		|| num_len > int_max_len)
		return (true);
	return (false);
}
