/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:49:15 by febranda          #+#    #+#             */
/*   Updated: 2025/12/13 21:45:50 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	add_node(t_list_push **lst, int content)
{
	t_list_push	*new_node;
	t_list_push	*temp;

	new_node = malloc(sizeof(t_list_push));
	if (new_node == NULL)
		exit (1);
	new_node->number = content;
	new_node->next = NULL;
	if (*lst == NULL)
	{
		new_node->prev = NULL;
		*lst = new_node;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	new_node->prev = temp;
	temp->next = new_node;
}
