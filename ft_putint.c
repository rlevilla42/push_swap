/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 23:25:58 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/04 23:31:37 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putint(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
	ft_printf("BONUS + 1 = tab[%d] = %d\n", i, tab[i]);
}
