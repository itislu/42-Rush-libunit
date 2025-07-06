/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 22:48:40 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 22:48:41 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "libft/libft.h"
#include "t_libunit.h"
#include <unistd.h>

t_libunit	*libunit_new(void)
{
	t_libunit	*libunit;

	libunit = ft_calloc(1, sizeof(t_libunit));
	if (libunit == NULL)
		ft_dprintf(STDERR_FILENO, "ERROR: Failed to allocate libunit\n");
	return (libunit);
}
