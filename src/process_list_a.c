/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_list_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 17:29:16 by febranda          #+#    #+#             */
/*   Updated: 2025/12/19 05:33:17 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	process_list_a(char	*args)
{
	t_list_push	*list_a;
	t_list_push	*list_b;
	t_list_push	*temp;

	list_a = create_list_a(args);
	list_b = NULL;
	if (!check_duplicate_numbers(list_a))
	{
		printf("Tem números duplicados.");
		destroy_list(list_a);
	}
	else
	{
		fill_nodes_id(list_a);
		temp = list_a;
		while (temp)
		{
			printf("Number:%d, Id:%d \n", temp->number, temp->id);
			temp = temp->next;
		}
		destroy_list(list_a);
	}
}
