/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_nodes_id.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 19:11:35 by febranda          #+#    #+#             */
/*   Updated: 2025/12/15 21:35:05 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	fill_nodes_id(t_list_push *lst)
{
	t_list_push	*head;
	t_list_push	*temp1;
	t_list_push	*temp2;
	int			id;

	head = lst;
	temp_1 = lst;
	temp_2 = lst;
	while (temp_1)
	{
		id = 0;
		while (temp_2)
		{
			if (temp_1->number > temp_2->number)
				id++;
			temp_2 = temp2->next;
		}
		temp_1->id = id;
		temp_1 = temp_1->next;
		temp2 = head;
	}
}
