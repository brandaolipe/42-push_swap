/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:14:49 by febranda          #+#    #+#             */
/*   Updated: 2025/12/15 21:26:47 by febranda         ###   ########.fr       */
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
	int					id;
	int					number;
	struct s_list_push	*next;
	struct s_list_push	*prev;
}	t_list_push;

char		*reverse_split(char **arr);
int			verify_arguments(char *args);
int			ft_atoi_enhanced(char *str, t_list_push *lst, char **arr);
int			check_duplicate_numbers(t_list_push *lst);
void		process_list_a(char	*args);
void		free_split(char **arr);

//list functions
void		add_node(t_list_push **lst, int content);
void		destroy_list(t_list_push *lst);
void		fill_nodes_id(t_list_push *lst);
t_list_push	*create_list_a(char *args);

#endif
