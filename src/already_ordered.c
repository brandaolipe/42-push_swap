/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   already_ordered.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:50:14 by febranda          #+#    #+#             */
/*   Updated: 2026/01/10 17:52:24 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	already_ordered(t_stack *stack_a)
{
	t_stack	*next_node;

	next_node = stack_a->next;
	while (next_node)
	{
		if (stack_a->number > next_node->number)
			return (0);
		next_node = next_node->next;
		stack_a = stack_a->next;
	}
	return (1);
}
