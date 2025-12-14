/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate_numbers.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 16:15:03 by febranda          #+#    #+#             */
/*   Updated: 2025/12/14 19:53:15 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_duplicate_numbers(t_list_push *lst)
{
	t_list_push	*current;
	t_list_push	*temp;

	current = lst;
	while (current)
	{
		temp = current->next;
		while (temp)
		{
			if (current->number == temp->number)
				return (1);
			temp = temp->next;
		}
		current = current->next;
	}
	return (0);
}
