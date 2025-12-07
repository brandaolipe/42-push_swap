/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 20:09:52 by febranda          #+#    #+#             */
/*   Updated: 2025/12/07 20:51:47 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

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
		verify_arguments(argv[1]);
	}
	else
	{
		str = reverse_split(argv);
		verify_arguments(str);
	}
	return (0);
}
