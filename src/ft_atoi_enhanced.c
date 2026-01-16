/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_enhanced.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 16:09:44 by febranda          #+#    #+#             */
/*   Updated: 2026/01/15 22:10:14 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	kill_process(t_stack *lst, char **arr);

int	ft_atoi_enhanced(char *str, t_stack	*lst, char **arr)
{
	long	number;
	int		signal;
	int		i;

	i = 0;
	signal = 1;
	number = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		if ((number * signal) > MAX_INT || (number * signal) < MIN_INT)
			kill_process(lst, arr);
		i++;
	}
	return ((number * signal));
}

static void	kill_process(t_stack *lst, char **arr)
{
	free_split(arr);
	destroy_list(lst);
	ft_putendl_fd("Error", 2);
	exit(1);
}
