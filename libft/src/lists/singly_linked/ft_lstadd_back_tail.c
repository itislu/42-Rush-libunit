/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_tail.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldulling <ldulling@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 00:35:15 by ldulling          #+#    #+#             */
/*   Updated: 2025/06/06 16:24:25 by ldulling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/**
 * The ft_lstadd_back_tail function adds a node to the end of the singly linked
 * list.
 * It uses the tail pointer of the list to avoid traversing the whole list.
 * The tail pointer is updated to point to the new node.
 *
 * @param lst     The address of the pointer to the first node of the list.
 * @param tail    The address of the pointer to the last node of the list.
 *                If tail (not *tail) is NULL, it is ignored.
 * @param node    The new node to be added to the list.
 *                If node is NULL, the function does nothing.
 */
void	ft_lstadd_back_tail(t_list **lst, t_list **tail, t_list *node)
{
	if (lst == NULL || tail == NULL || node == NULL)
	{
		ft_lstadd_back(lst, node);
		return ;
	}
	if (*lst == NULL || *tail == NULL)
		ft_lstadd_back(lst, node);
	else
		(*tail)->next = node;
	*tail = node;
}
