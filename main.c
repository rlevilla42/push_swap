/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 00:43:26 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/04 23:41:55 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
void	ft_putint(int *tab)
{
	int	j;

	j = 0;
	while (j < 10)
	{
		ft_printf("%d\n", tab[j]);
		j++;
	}
}
*/
int	main(int argc, char **argv)
{
	int	*tab;
	int	size;

	if (ft_check_error(argc, argv) == 0)
		return (0);
	size = size_tab(argc, argv);
	tab = ft_input(argc, argv);
	ft_putint(tab, size);
	return (0);
}
