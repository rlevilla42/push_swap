/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intput_int_argv.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 22:07:03 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/10 16:28:15 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"
/*
void	ft_putint_argv(int *tab, int argc)
{
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		ft_printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
}

int	ft_atoi(const char *str)
{
	int	i;
	int	buffer;
	int	countminus;

	i = 0;
	countminus = 1;
	buffer = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			countminus = -1;
		i++;
	}
	if (str[i] < 48 || str[i] > 57)
	{
		write(1, "Error\n", 6);
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		buffer = (buffer * 10) + (str[i] - 48);
		i++;
	}
	return (buffer * countminus);
}
*/
int	*ft_intput_int_argv(int argc, char **argv)
{
	int	*tab;
	int	i;

	i = 0;
	tab = (int *)malloc(sizeof(int) * (argc - 1));
	//ft_printf("argc = %d\n\n", argc);
	while (i < argc - 1)
	{
		tab[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	return (tab);
}
/*
int	main(int argc, char **argv)
{
	int *tab = ft_intput_int_argv(argc, argv);
	ft_putint_argv(tab, argc);
	return (0);
}*/
