/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_list_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 10:49:15 by febranda          #+#    #+#             */
/*   Updated: 2025/12/11 16:47:36 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list_push	fill_list_a(char *args)
{
	char		**array_args;
	t_list_push	head_list_a;
	int			content;

	head_list_a = NULL;
	array_args = ft_split(args, ' ');
	while (*array_args)
	{
		content = ft_atoi_enhance(*array_args);
		add_node(&head_list_a, content);
		array_args++;
	}
	return (head_list_a);
}

void	add_node(t_list_push **lst, int content)
{
	t_list_push	*new_node;
	t_list_push	*temp;

	new_node = malloc(sizeof(t_list_push));
	if (new_node == NULL)
		exit (1);
	new_node->number = content;
	new_node->next = NULL;
	if (*lst == NULL)
	{
		new_node->prev = NULL;
		*lst = new_node;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	new_node->prev = temp;
	temp->next = new_node;
}
