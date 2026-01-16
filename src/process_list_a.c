/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_list_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 17:29:16 by febranda          #+#    #+#             */
/*   Updated: 2026/01/15 22:10:55 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	process_list_a(char *args, int free_flag)
{
	t_stack	*list_a;
	t_stack	*list_b;

	list_a = create_list_a(args, free_flag);
	list_b = NULL;
	if (!check_duplicate_numbers(list_a))
	{
		ft_putendl_fd("Error", 2);
		destroy_list(list_a);
		exit(1);
	}
	else
	{
		fill_nodes_id(list_a);
	}
	if (already_ordered(list_a))
	{
		destroy_list(list_a);
		exit(0);
	}
	define_sorting_method(&list_a, &list_b);
	destroy_list(list_a);
}
