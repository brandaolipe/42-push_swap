/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:14:49 by febranda          #+#    #+#             */
/*   Updated: 2025/12/13 21:27:40 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX_INT 2147483647
# define MIN_INT -2147483648

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft.h"

typedef struct s_list_push
{
	int				id;
	int				number;
	struct s_list_push	*next;
	struct s_list_push	*prev;
}	t_list_push;

//void	fill_list_a(char **argv);
char	*reverse_split(char **arr);
int		verify_arguments(char *args);
void	add_node(t_list_push **lst, int content);
int		ft_atoi_enhanced(char *str);
void	create_list_a(char *args);

//list functions
void	add_node(t_list_push **lst, int content);

#endif
