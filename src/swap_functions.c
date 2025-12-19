/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:54:05 by febranda          #+#    #+#             */
/*   Updated: 2025/12/19 05:10:39 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	swap(t_list_push **lst)
{
	t_list_push	*first;
	t_list_push	*second;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	first = *lst;
	second = first->next;
	if (second->next)
		second->next->prev = first;
	first->prev = second;
	first->next = second->next;
	second->prev = NULL;
	second->next = first;
	*lst = second;
}

void	sa(t_list_push **lst_a)
{
	swap(lst_a);
	ft_putendl_fd("sa", 1);
}

void	sb(t_list_push **lst_b)
{
	swap(lst_b);
	ft_putendl_fd("sb", 1);
}

void	ss(t_list_push **lst_a, t_list_push **lst_b)
{
	int	swapped;

	swapped = 0;
	if (lst_a && *lst_a && (*lst_a)->next)
	{
		swap(lst_a);
		swapped = 1;
	}
	if (lst_b && *lst_b && (*lst_b)->next)
	{
		swap(lst_b);
		swapped = 1;
	}
	if (swapped)
		ft_putendl_fd("ss", 1);
}
