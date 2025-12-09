/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_list_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:49:15 by febranda          #+#    #+#             */
/*   Updated: 2025/12/09 13:52:34 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list_push	fill_list_a(char *args)
{
	char	**array_args;
	t_list_push	head_list_a;

	head_list_a = NULL;
	array_args = ft_split(args, ' ');
	while (*array_args)
	{
		add_node(&head_list_a, **array_args)
		*array_args++;
	}
	return (head_list_a);
}

void	add_node(t_list_push **lst, char *content)
{
	t_list_push	*new_node;
	t_list_push	*temp;

	int	new_content;
 
	new_content = ft_atoi(content);
	new_node->number = new_content;
	if (!*lst)
		*lst = new_node;
	//...
}
