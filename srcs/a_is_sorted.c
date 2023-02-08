/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_is_sorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:31:47 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/07 17:11:07 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	a_is_sorted(int *tab, int size)
{
	int	i;

	i = 0;
	if (ft_tabsize(tab) == 1)
	{
		ft_printf("c deja trier bro\n");
		return (1);
	}
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
			return (0);
		else
			i++;
	}
	return (1);
}
