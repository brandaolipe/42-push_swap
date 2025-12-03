/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:14:49 by febranda          #+#    #+#             */
/*   Updated: 2025/12/03 19:14:38 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <unistd.h>

typedef struct s_list_a
{
	int				id;
	int				number;
	struct s_list_a	*next;
	struct s_list_a	*prev;
}	t_list_a;

typedef struct s_list_b
{
	int				id;
	int				number;
	struct s_list_b	*next;
	struct s_list_b	*prev;
}	t_list_b;

#endif
