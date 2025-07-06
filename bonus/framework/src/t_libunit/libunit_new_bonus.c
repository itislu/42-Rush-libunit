/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_new_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 23:10:44 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 23:10:44 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "libft/libft.h"
#include "t_libunit_bonus.h"
#include "libunit_bonus.h"
#include <unistd.h>

t_libunit	*libunit_new(void)
{
	t_libunit	*libunit;

	libunit = ft_calloc(1, sizeof(t_libunit));
	if (libunit == NULL)
		ft_dprintf(STDERR_FILENO, "ERROR: Failed to allocate libunit\n");
	libunit_set_timeout(libunit, DEFAULT_TIMEOUT);
	return (libunit);
}
