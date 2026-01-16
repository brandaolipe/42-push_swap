/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 20:09:52 by febranda          #+#    #+#             */
/*   Updated: 2026/01/16 01:14:51 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	invalid_arguments(void);
static int	vefify_empty_arguments(char **args);

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
		if (vefify_empty_arguments(argv + 1))
			invalid_arguments();
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
	ft_putendl_fd("Error", 2);
	exit(1);
}

static int	vefify_empty_arguments(char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		if (args[i][0] == '\0')
		{
			return (1);
		}
		i++;
	}
	return (0);
}
