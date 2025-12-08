/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:14:49 by febranda          #+#    #+#             */
/*   Updated: 2025/12/07 20:30:06 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include "libft.h"

void	fill_list_a(char **argv);
char	*reverse_split(char **arr);
int		verify_chars(char *numbers);

typedef struct s_list_push
{
	int				id;
	int				number;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list_push;

#endif
