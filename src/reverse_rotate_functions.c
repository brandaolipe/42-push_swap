/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_functions.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: userzer0 <userzer0@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 04:27:41 by febranda          #+#    #+#             */
/*   Updated: 2026/01/08 16:30:20 by userzer0         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	reverse_rotate(t_stack **lst)
{
	t_stack	*last;
	t_stack	*before_last;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	last = *lst;
	while (last->next)
		last = last->next;
	before_last = last->prev;
	before_last->next = NULL;
	last->prev = NULL;
	last->next = *lst;
	(*lst)->prev = last;
	*lst = last;
}

void	rra(t_stack **lst_a)
{
	if (!lst_a || !*lst_a || !(*lst_a)->next)
		return ;
	reverse_rotate(lst_a);
	ft_putendl_fd("rra", 1);
}

void	rrb(t_stack **lst_b)
{
	if (!lst_b || !*lst_b || !(*lst_b)->next)
		return ;
	reverse_rotate(lst_b);
	ft_putendl_fd("rrb", 1);
}

void	rrr(t_stack **lst_a, t_stack **lst_b)
{
	int	rotated;

	rotated = 0;
	if (lst_a && *lst_a && (*lst_a)->next)
	{
		reverse_rotate(lst_a);
		rotated = 1;
	}
	if (lst_b && *lst_b && (*lst_b)->next)
	{
		reverse_rotate(lst_b);
		rotated = 1;
	}
	if (rotated)
		ft_putendl_fd("rrr", 1);
}
