/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_tab_to_index.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:26:52 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/04 23:44:33 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"
/*
void	ft_putint(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	printf("\n");
}
*/
int	*ft_tabcpy(int *tab, int size)
{
	int	*tab2;
	int	i;
	int	temp;

	i = 0;
	tab2 = (int *)malloc(sizeof(tab));
	while (i < size)
	{
		tab2[i] = tab[i];
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		if (tab2[i] > tab2[i + 1])
		{
			temp = tab2[i];
			tab2[i] = tab2[i + 1];
			tab2[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
	return (tab2);
}

int	*ft_convert_tab_to_index(int *tab, int size)
{
	int	*tab2;
	int	i;
	int	j;

	tab2 = ft_tabcpy(tab, size);
	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			if (tab2[j] == tab[i])
			{
				tab[i] = j;
				j++;
				if (j >= size)
					break ;
			}
			else
				i++;
		}
	}
	free(tab2);
	return (tab);
}
/*
int	main(void)
{
	int	tab[] = {-44, -87, 667, 666, 0, 17, -444};
	//int	tab[] = {87, -487, 781, -100, 101, 0, 1};
	ft_convert_tab_to_radixsort(tab, 7);
	return (0);
}*/
