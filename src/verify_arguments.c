/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_arguments.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:49:03 by febranda          #+#    #+#             */
/*   Updated: 2026/01/16 02:56:25 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	verify_arguments(char *args)
{
	int	i;
	int	has_number;

	i = 0;
	has_number = 0;
	while (args[i])
	{
		if (args[i] == ' ')
			i++;
		else if ((args[i] == '+' || args[i] == '-') && ft_isdigit(args[i + 1]))
			i++;
		else if (ft_isdigit(args[i]))
		{
			has_number = 1;
			if (args[i + 1] == '-' || args[i + 1] == '+')
				return (0);
			i++;
		}
		else
			return (0);
	}
	return (has_number);
}
