/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:14:49 by febranda          #+#    #+#             */
/*   Updated: 2026/01/14 19:37:35 by febranda         ###   ########.fr       */
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

typedef struct s_stack
{
	int					id;
	int					number;
	int					max_id;
	struct s_stack		*next;
	struct s_stack		*prev;
}	t_stack;

char		*reverse_split(char **arr);
int			verify_arguments(char *args);
int			ft_atoi_enhanced(char *str, t_stack *lst, char **arr);
int			check_duplicate_numbers(t_stack *lst);
void		process_list_a(char *args, int free_flag);
void		free_split(char **arr);
int			already_ordered(t_stack *stack_a);
void		define_sorting_method(t_stack **stack_a, t_stack **stack_b);

//list functions
void		add_node(t_stack **lst, int content);
void		destroy_list(t_stack *lst);
void		fill_nodes_id(t_stack *lst);
t_stack		*create_list_a(char *args, int free_flag);
t_stack		*last_node(t_stack *stack);
void		radix(t_stack **stack_a, t_stack **stack_b);
void		three_nodes_order(t_stack **stack);
void		four_nodes_order(t_stack **stack_a, t_stack **stack_b);
void		five_nodes_order(t_stack **stack_a, t_stack **stack_b);
int			stack_size(t_stack *stack);

//moveset functions
void		push_a(t_stack **lst_a, t_stack **lst_b);
void		push_b(t_stack **lst_a, t_stack **lst_b);
void		sa(t_stack **lst);
void		sb(t_stack **lst);
void		ss(t_stack **lst_a, t_stack **lst_b);
void		ra(t_stack **lst_a);
void		rb(t_stack **lst_b);
void		rr(t_stack **lst_a, t_stack **lst_b);
void		rra(t_stack **lst_a);
void		rrb(t_stack **lst_b);
void		rrr(t_stack **lst_a, t_stack **lst_b);

#endif
