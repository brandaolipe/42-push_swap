/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate_numbers.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: userzer0 <userzer0@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 16:15:03 by febranda          #+#    #+#             */
/*   Updated: 2026/01/08 16:30:20 by userzer0         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_duplicate_numbers(t_stack *lst)
{
	t_stack	*current;
	t_stack	*temp;

	current = lst;
	while (current)
	{
		temp = current->next;
		while (temp)
		{
			if (current->number == temp->number)
				return (0);
			temp = temp->next;
		}
		current = current->next;
	}
	return (1);
}
