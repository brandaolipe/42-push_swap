/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 20:09:52 by febranda          #+#    #+#             */
/*   Updated: 2026/01/10 18:01:49 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	invalid_arguments(void);

int	main(int argc, char **argv)
{
	char	*str;

	str = NULL;
	if (argc < 2)
		exit(1);
	else if (argc == 2)
	{
		if (!verify_arguments(argv[1]))
			invalid_arguments();
		process_list_a(argv[1], 0);
	}
	else
	{
		str = reverse_split(++argv);
		if (!verify_arguments(str))
		{
			free(str);
			invalid_arguments();
		}
		process_list_a(str, 1);
	}
	return (0);
}

static void	invalid_arguments(void)
{
	ft_putendl_fd("Error", 1);
	exit(1);
}
