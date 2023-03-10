/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:37:06 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/07 18:47:55 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*sa_swap_a(int *tab)
{
	  int	i;
	  int	temp;

	  i = 0;
	  temp = tab[i];
	  tab[i] = tab[i + 1];
	  tab[i + 1] = temp;
	  return (tab);
}

int	main(void)
{
	int	tab[] = {66, 0, -17, 999, -666, 12345, -1};
	ft_putint(tab, 6);
	sa_swap_a(tab);
	ft_putint(tab, 6);
}
