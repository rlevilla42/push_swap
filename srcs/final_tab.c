/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:26:52 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/05 19:11:46 by rlevilla         ###   ########.fr       */
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
int	*ft_sort_tabcpy(int *tab, int size)
{
	int	*tab2;
	int	i;
	int	temp;

	i = 0;
	tab2 = (int *)malloc(sizeof(int) * size);
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

	tab2 = ft_sort_tabcpy(tab, size);
	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[i] == tab2[j])
			{
				tab[i] = j;
				i++;
				j = 0;
				if (i >= size)
					break ;
			}
			else
				j++;
		}
	}
	free(tab2);
	return (tab);
}

int	*final_tab(int *tab, int size)
{
	int	*tab_temp;
	int	*final_tab;
	int	i;

	i = 0;
	tab_temp = ft_convert_tab_to_index(tab, size);
	final_tab = (int *)malloc(sizeof(int) * size + 1);
	while (i < size)
	{
		final_tab[i] = tab_temp[i];
		i++;
	}
	final_tab[i] = -1;
	return (final_tab);
}
/*
int	main(void)
{
	//int	tab[] = {-44, 12, 123, 1234, -12345, 123456, -1234567, 987, -9876, 2, 3, 4, 5, 6, 9, 8, -99, -33, -333, 0};
	int	tab[] = {-44, 667, -666, 1234567, -12345678, 2, 3, 4, 5, 6, 9, 8, -99, -33, -333, 0};
	int	*tab_final = final_tab(tab, 16);
	ft_putint_str(tab_final);
	return (0);
}*/
