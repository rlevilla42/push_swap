/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:59:23 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/04 23:38:40 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**argv_to_split(int argc, char **argv)
{
	int	j;
	int	i;
	char	**pstr;

	j = 0;
	i = 1;
	pstr = (char **)malloc(sizeof(char *) * (argc));
	while (j < argc - 1)
	{
		pstr[j] = argv[i];
		i++;
		j++;
	}
	pstr[j] = NULL;
	return (pstr);
}

char	**one_str_to_split(char *str)
{
	char	**pstr;

	pstr = ft_split(str, ' ');
	return (pstr);
}

int	size_tab(int argc, char **argv)
{
	int	j;
	char	**pstr;

	j = 0;
	if (argc == 2)
		pstr = one_str_to_split(argv[1]);
	else
		pstr = argv_to_split(argc, argv);
	while (pstr[j] != NULL)
		j++;
	return (j);
}

int	*ft_split_to_int(int argc, char **argv)
{
	int		i;
	int		j;
	int		*tab;
	char	**ptrstr;

	i = 0;
	j = size_tab(argc, argv);
	if (argc == 2)
		ptrstr = one_str_to_split(argv[1]);
	else
		ptrstr = argv_to_split(argc, argv);
	tab = (int *)malloc(sizeof(int) * j);
	j -= 1;
	while (j >= 0)
	{
		tab[i] = ft_atoi(ptrstr[j]);
		j--;
		i++;
	}
	return (tab);
}

int	*ft_input(int argc, char **argv)
{
	return (ft_split_to_int(argc, argv));
}
/*
int	main(int argc, char **argv)
{
	int	*tab = ft_intput(argc, argv);
	int	n = size_tab(argc, argv);
	int	i = 0;
	while (i < n)
	{
		ft_printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	return (0);
}*/
