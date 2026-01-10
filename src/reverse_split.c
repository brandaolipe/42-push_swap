/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febranda <febranda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 17:02:17 by febranda          #+#    #+#             */
/*   Updated: 2026/01/10 18:03:05 by febranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	absolute_len(char **arr);

char	*reverse_split(char **arr)
{
	char	*str;
	int		len;
	int		i;

	len = absolute_len(arr);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (*arr)
	{
		while (**arr)
		{
			str[i] = **arr;
			(*arr)++;
			i++;
		}
		if (*(arr + 1) != NULL)
			str[i++] = ' ';
		arr++;
	}
	str[i] = '\0';
	return (str);
}

static int	absolute_len(char **arr)
{
	int	i;
	int	j;
	int	len;

	j = 0;
	len = 0;
	while (arr[j])
	{
		i = 0;
		while (arr[j][i])
		{
			len++;
			i++;
		}
		j++;
	}
	return (len + j - 1);
}
