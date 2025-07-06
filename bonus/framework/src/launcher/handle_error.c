/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 22:55:40 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 22:58:40 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/ft_printf.h"
#include "t_libunit/t_libunit_bonus.h"
#include "t_libunit/t_unit_test_bonus.h"
#include <unistd.h>

void	handle_error(t_libunit *libunit, const char *test_name)
{
	libunit->state = STATE_ERROR;
	ft_dprintf(STDERR_FILENO,
		"\nERROR: An error occurred during test-launch-execution for %s:%s. "
		"The %s collection of tests will abort. "
		"If there are any more collections, they will continue.\n\n",
		libunit->name, test_name, libunit->name);
	ft_lstclear(&libunit->tests, unit_test_free);
}
