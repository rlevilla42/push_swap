/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intput_int_split.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 00:55:32 by rlevilla          #+#    #+#             */
/*   Updated: 2023/01/28 16:30:19 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	countstr(char **ptrstr)
{
	int	j;

	j = 0;
	while (ptrstr[j] != NULL)
	{
		j++;
	}
	return (j);
}

int	*ft_intput_int_split(char *str)
{
	int		i;
	int		j;
	int		*tab;
	char	**ptrptrs;

	i = 0;
	ptrptrs = ft_split(str, ' ');
	j = countstr(ptrptrs) - 1;
	tab = (int *)malloc(sizeof(int) * j + 1);
	while (j >= 0)
	{
		tab[i] = ft_atoi(ptrptrs[j]);
		j--;
		i++;
	}
	return (tab);
}
/*
int main(int argc, char **argv)
{
	(void)argc;
	char	**ptrstr = ft_split(argv[1], ' ');
	int	*tab = ft_intput_int_split(argv[1]);
	int	size = countstr(ptrstr);;
	int	i = 0;
	while (i < size)
	{
		ft_printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	return (0);
}*/
