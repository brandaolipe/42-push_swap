/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_nodes_id.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: userzer0 <userzer0@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 19:11:35 by febranda          #+#    #+#             */
/*   Updated: 2026/01/08 16:30:20 by userzer0         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	fill_nodes_id(t_stack *lst)
{
	t_stack	*head;
	t_stack	*temp1;
	t_stack	*temp2;
	int			id;

	lst->max_id = 0;
	head = lst;
	temp1 = lst;
	temp2 = lst;
	while (temp1)
	{
		id = 0;
		while (temp2)
		{
			if (temp1->number > temp2->number)
				id++;
			temp2 = temp2->next;
		}
		if (id > lst->max_id)
			lst->max_id = id;
		temp1->id = id;
		temp1 = temp1->next;
		temp2 = head;
	}
}
