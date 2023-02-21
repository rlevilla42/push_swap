/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:26:52 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/21 23:02:23 by rlevilla         ###   ########.fr       */
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
int	*ft_sort_tabcpy(int *tab, int size_a)
{
	int	*tab2;
	int	i;
	int	temp;

	i = 0;
	tab2 = (int *)malloc(sizeof(int) * size_a);
	while (i < size_a)
	{
		tab2[i] = tab[i];
		i++;
	}
	i = 0;
	while (i < size_a - 1)
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

int	*ft_convert_tab_to_index(int *tab, int size_a)
{
	int	*tab2;
	int	i;
	int	j;

	tab2 = ft_sort_tabcpy(tab, size_a);
	i = 0;
	j = 0;
	while (i < size_a)
	{
		while (j < size_a)
		{
			if (tab[i] == tab2[j])
			{
				tab[i] = j;
				i++;
				j = 0;
				if (i >= size_a)
					break ;
			}
			else
				j++;
		}
	}
	free(tab2);
	return (tab);
}
/*
int	*final_tab(int argc, char **argv, t_stack a)
{
	int	*tab_input;
	int	*tab_final;

	tab_input = ft_input(argc, argv);
	tab_final = ft_convert_tab_to_index(tab_input, size_a);
	return (tab_final);
}
*/
int	*final_tab(int argc, char **argv, int size_a)
{
	int	*tab_input;
	int	*tab_final;

	tab_input = ft_input(argc, argv);
	tab_final = ft_convert_tab_to_index(tab_input, size_a);
	return (tab_final);
}
/*
int	main(int argc, char **argv)
{
	t_stack	a;

	if (ft_check_error(argc, argv) == 0)
		return (0);
	a.size = ft_ptrsize_tab(argc, argv);
	ft_printf("%d\n", a.size[0]);
	a.tab = final_tab(argc, argv, a.size[0]);
	//if (a_is_sorted(a.tab, a.size[0]))
		//return (0);
	ft_putint(a.tab, a.size[0]);
	ft_printf("\n");
	return (0);
}
*/
/*
int	main(int argc, char **argv)
{	
	t_stack	a;
	a.size = ft_ptrsize_tab(argc, argv);
	a.tab = final_tab(argc, argv, a.size[0]);
	ft_putint(a.tab, a.size[0]);
	return (0);
}
*/
/*
int	*final_tab(int *tab, int size)
{
	int	*tab_temp;
	int	*final_tab;
	int	i;

	i = 0;
	tab_temp = ft_convert_tab_to_index(tab, size);
	//final_tab = ft_convert_tab_to_index(tab, size);
	final_tab = (int *)malloc(sizeof(int) * size);
	while (i < size)
	{
		final_tab[i] = tab_temp[i];
		i++;
	}
	//final_tab[i] = -1;
	//free(tab_temp);
	//free(tab);
	return (final_tab);
}
*/
/*
int	main(void)
{
	//int	tab[] = {-44, 12, 123, 1234, -12345, 123456, -1234567, 987, -9876, 2, 3, 4, 5, 6, 9, 8, -99, -33, -333, 0};
	int	tab[] = {-44, 667, -666, 1234567, -12345678, 2, 3, 4, 5, 6, 9, 8, -99, -33, -333, 0};
	int	*tab_final = final_tab(tab, 16);
	ft_putint(tab_final, 16);
	return (0);
}*/
