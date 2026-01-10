/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_sorting_method.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:55:11 by febranda          #+#    #+#             */
/*   Updated: 2026/01/10 17:56:52 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	define_sorting_method(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = stack_size(*stack_a);
	if (size == 2)
	{
		if ((*stack_a)->id > (*stack_a)->next->id)
			sa(stack_a);
	}
	else if (size == 3)
	{
		three_nodes_order(stack_a);
	}
	else if (size == 4)
	{
		four_nodes_order(stack_a, stack_b);
	}
	else if (size == 5)
	{
		five_nodes_order(stack_a, stack_b);
	}
	else if (size > 5)
	{
		radix(stack_a, stack_b);
	}
}
