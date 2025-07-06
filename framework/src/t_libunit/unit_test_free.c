/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_test_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 22:48:29 by ldulling          #+#    #+#             */
/*   Updated: 2025/07/06 22:48:30 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_unit_test.h"
#include <stdlib.h>

void	unit_test_free(void *content)
{
	free(content);
}
