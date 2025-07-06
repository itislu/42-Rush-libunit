/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_test_free_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mweghofe <mweghofe@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 23:13:12 by mweghofe          #+#    #+#             */
/*   Updated: 2025/07/06 23:13:12 by mweghofe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_unit_test_bonus.h"
#include <stdlib.h>

void	unit_test_free(void *content)
{
	free(content);
}
