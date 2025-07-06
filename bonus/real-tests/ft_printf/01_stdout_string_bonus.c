/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_string_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 07:41:11 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 23:21:34 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include <string.h>

int	stdout_string(void)
{
	const char	*test_string = "test_string";

	if ((size_t) ft_printf("%s", test_string) == strlen(test_string))
		return (0);
	return (-1);
}
