/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_list_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 17:29:16 by febranda          #+#    #+#             */
/*   Updated: 2025/12/28 21:55:10 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	process_list_a(char	*args)
{
	t_list_push	*list_a;
	t_list_push	*list_b;
	t_list_push	*temp;

	list_a = create_list_a(args, 1);
	list_b = NULL;
	if (!check_duplicate_numbers(list_a))
	{
		ft_putendl_fd("Error", 1);
		destroy_list(list_a);
		exit(1);
	}
	else
	{
		fill_nodes_id(list_a);
	}
	radix(&list_a, &list_b);
}
//Check if it's already sorted.