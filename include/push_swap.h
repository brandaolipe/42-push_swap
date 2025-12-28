/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:14:49 by febranda          #+#    #+#             */
/*   Updated: 2025/12/19 05:30:51 by febranda         ###   ########.fr       */
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
	int					max_id;
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
void	radix(t_list_push **stack_a, t_list_push **stack_b);

//moveset functions
void		push_a(t_list_push **lst_a, t_list_push **lst_b);
void		push_b(t_list_push **lst_a, t_list_push **lst_b);
void		sa(t_list_push **lst);
void		sb(t_list_push **lst);
void		ss(t_list_push **lst_a, t_list_push **lst_b);
void		ra(t_list_push **lst_a);
void		rb(t_list_push **lst_b);
void		rr(t_list_push **lst_a, t_list_push **lst_b);
void		rra(t_list_push **lst_a);
void		rrb(t_list_push **lst_b);
void		rrr(t_list_push **lst_a, t_list_push **lst_b);

#endif
