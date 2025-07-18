/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_finish_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 23:10:33 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 23:10:33 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit_bonus.h"
#include "t_libunit_bonus.h"
#include "utils/utils_bonus.h"
#include <unistd.h>

// Prints the summary and frees libunit
int	libunit_finish(t_libunit **libunit)
{
	int	ret_val;

	if (libunit == NULL || *libunit == NULL)
		return (STATE_ERROR);
	ret_val = (*libunit)->state;
	prt_total_stats(&(*libunit)->total, "SUMMARY", -1);
	close((*libunit)->log_fd);
	libunit_free(libunit);
	return (ret_val);
}
