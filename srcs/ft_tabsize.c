/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:50:19 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/07 17:00:38 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_tabsize(int *tab)
{
	int	i;

	i = 0;
	while (tab[i] != -1)
	{
		i++;
	}
	return (i);
}
/*
int main(void)
{
	int	tab[] = {4, 0, 1, 2, 3, -1};
	ft_printf("%d\n", ft_tabsize(tab));
}*/
