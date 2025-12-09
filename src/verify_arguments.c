/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_arguments.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:49:03 by febranda          #+#    #+#             */
/*   Updated: 2025/12/07 21:28:40 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	is_signal(char signal);

int	verify_arguments(char *args)
{
	int	i;

	if (args[0] == '\0')
		return (0);
	i = 0;
	while (args[i])
	{
		if (!ft_isdigit(args[i]) && !is_signal(args[i]) && args[i] != ' ')
			return (0);
		else if (ft_isdigit(args[i]) && is_signal(args[i+1]))
			return (0);
		else if (is_signal(args[i]) && (is_signal(args[i+1]) || args[i+1] == ' '))
			return (0);
		i++;
	}
	return (1);
}

static int	is_signal(char signal)
{
	if (signal == '+' || signal == '-')
	{
		return (1);
	}
	return (0);
}
