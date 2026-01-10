/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 19:55:56 by febranda          #+#    #+#             */
/*   Updated: 2026/01/10 18:01:54 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack **lst_a, t_stack **lst_b)
{
	t_stack	*first_b;

	if (!lst_b || !*lst_b)
		return ;
	first_b = *lst_b;
	*lst_b = first_b->next;
	if (*lst_b)
		(*lst_b)->prev = NULL;
	first_b->next = *lst_a;
	first_b->prev = NULL;
	if (*lst_a)
		(*lst_a)->prev = first_b;
	*lst_a = first_b;
	ft_putendl_fd("pa", 1);
}

void	push_b(t_stack **lst_a, t_stack **lst_b)
{
	t_stack	*first_a;

	if (!lst_a || !*lst_a)
		return ;
	first_a = *lst_a;
	*lst_a = first_a->next;
	if (*lst_a)
		(*lst_a)->prev = NULL;
	first_a->next = *lst_b;
	first_a->prev = NULL;
	if (*lst_b)
		(*lst_b)->prev = first_a;
	*lst_b = first_a;
	ft_putendl_fd("pb", 1);
}
