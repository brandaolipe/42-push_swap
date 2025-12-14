/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 20:09:52 by febranda          #+#    #+#             */
/*   Updated: 2025/12/13 21:39:30 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	char	*str;

	str = NULL;
	if (argc < 2)
	{
		ft_putendl_fd("Erro: faltaram os argumentos.", 1);
		exit(1);
	}
	else if (argc == 2)
	{
		if (!verify_arguments(argv[1]))
			exit(1);
		create_list_a(argv[1]);
	}
	else 
	{
		str = reverse_split(++argv);
		if (!verify_arguments(str))
			exit(1);
		create_list_a(str);
	}
	return (0);
}
