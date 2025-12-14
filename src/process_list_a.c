/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_list_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 17:29:16 by febranda          #+#    #+#             */
/*   Updated: 2025/12/14 19:54:05 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	process_list_a(char	*args)
{
	t_list_push	*list_a;
	t_list_push	*temp;

	list_a = create_list_a(args);
	if (check_duplicate_numbers(list_a))
	{
		printf("Tem números duplicados.");
	}
	else
	{
		printf("Não tem números duplicados.");
	}
	while (list_a->next)
	{
		temp = list_a->next;
		free(list_a);
		list_a = temp;
	}
}
