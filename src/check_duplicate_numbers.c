/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate_numbers.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 16:15:03 by febranda          #+#    #+#             */
/*   Updated: 2026/01/10 17:57:05 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
