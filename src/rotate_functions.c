/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: userzer0 <userzer0@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 01:04:06 by febranda          #+#    #+#             */
/*   Updated: 2026/01/08 16:30:20 by userzer0         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	rotate(t_stack **lst)
{
	t_stack	*first;
	t_stack	*temp;

	first = *lst;
	*lst = first->next;
	if (*lst)
		(*lst)->prev = NULL;
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = first;
	first->prev = temp;
	first->next = NULL;
}

void	ra(t_stack **lst_a)
{
	if (!lst_a || !*lst_a || !(*lst_a)->next)
		return ;
	rotate(lst_a);
	ft_putendl_fd("ra", 1);
}

void	rb(t_stack **lst_b)
{
	if (!lst_b || !*lst_b || !(*lst_b)->next)
		return ;
	rotate(lst_b);
	ft_putendl_fd("rb", 1);
}

void	rr(t_stack **lst_a, t_stack **lst_b)
{
	int	rotated;

	rotated = 0;
	if (lst_a && *lst_a && (*lst_a)->next)
	{
		rotate(lst_a);
		rotated = 1;
	}
	if (lst_b && *lst_b && (*lst_b)->next)
	{
		rotate(lst_b);
		rotated = 1;
	}
	if (rotated)
		ft_putendl_fd("rr", 1);
}
