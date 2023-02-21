/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:06:18 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/18 17:58:33 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putint_str(int *tab)
{
	int	i;

	i = 0;
	while (tab[i] != -1)
	{
		ft_printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}
}
