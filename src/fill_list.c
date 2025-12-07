/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:49:03 by febranda          #+#    #+#             */
/*   Updated: 2025/12/07 20:51:09 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//void	fill_list_a(char **argv)
//{
//}

int	verify_chars(char *arguments)
{
	int	i;

	i = 0;
	while (arguments[i])
	{
		if (ft_isdigit(arguments[i] || arguments[i] == 32))
			i++;
		else if (arguments[i] == '+' || arguments[i] == '-')
		{
			if(i != 0)
			{
				if (ft_isdigit(arguments[--i]))
					return (0);
				if (arguments[++i] == '+' || arguments[++i] == '-')
					return (0);
				if (arguments[--i] == ' ' && arguments[++i] == ' ')
					return (0);
			}
			i++;
		}
	}
	return (1);
}

int	main(void)
{
	ft_isdigit
	return (0);
}
