/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 21:00:50 by febranda          #+#    #+#             */
/*   Updated: 2025/12/28 21:01:35 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	get_bit_size(int max_id);

void	radix(t_list_push **stack_a, t_list_push **stack_b)
{
	int	i;
	int	j;
	int	max_id;
	int	bits;

	max_id = (*stack_a)->max_id;
	bits = get_bit_size(max_id);
	i = 0;
	while (i < bits)
	{
		j = 0;
		while (j < max_id + 1)
		{
			if ((((*stack_a)->id >> i) & 1) == 0)
				push_b(stack_a, stack_b);
			else
				ra(stack_a);
			j++;
		}
		while (*stack_b)
			push_a(stack_a, stack_b);
		i++;
	}
}

static int	get_bit_size(int max_id)
{
	int	bits;

	bits = 0;
	while (max_id > 0)
	{
		max_id = max_id >> 1;
		bits++;
	}
	return (bits);
}
