/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 18:57:56 by febranda          #+#    #+#             */
/*   Updated: 2025/12/15 18:28:37 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list_push	*create_list_a(char *args)
{
	char		**array_args;
	t_list_push	*list_a;
	int			content;
	int			i;

	i = 0;
	list_a = NULL;
	array_args = ft_split(args, ' ');
	free(args);
	while (array_args[i])
	{
		content = ft_atoi_enhanced(array_args[i], list_a, array_args);
		add_node(&list_a, content);
		i++;
	}
	free_split(array_args);
	return (list_a);
}
