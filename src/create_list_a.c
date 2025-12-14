/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 18:57:56 by febranda          #+#    #+#             */
/*   Updated: 2025/12/14 19:41:55 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list_push	*create_list_a(char *args)
{
	char		**array_args;
	t_list_push	*list_a;
	int			content;

	list_a = NULL;
	array_args = ft_split(args, ' ');
	while (*array_args)
	{
		content = ft_atoi_enhanced(*array_args);
		add_node(&list_a, content);
		array_args++;
	}
	// while (list_a)
	// {
	// 	printf("%d\n", list_a->number);//printa os inteiros
	// 	list_a = list_a->next;
	// }
	//check_duplicate_numbers(list_a);
	//free(args);
	free_split(array_args);
	return (list_a);
}
