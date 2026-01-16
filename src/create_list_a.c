/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 18:57:56 by febranda          #+#    #+#             */
/*   Updated: 2026/01/16 00:57:04 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_list_a(char *args, int free_flag)
{
	char	**array_args;
	t_stack	*list_a;
	int		content;
	int		i;

	i = 0;
	list_a = NULL;
	array_args = ft_split(args, ' ');
	if (free_flag)
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
