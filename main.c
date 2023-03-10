/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 00:43:26 by rlevilla          #+#    #+#             */
/*   Updated: 2023/03/11 00:00:44 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (ft_check_error(argc, argv) == 0)
		return (0);
	a.size = ft_ptrsize_tab(argc, argv);
	b.tab = (int *)malloc(sizeof(int) * a.size[0]);
	b.size = bsize(argc, argv);
	a.tab = final_tab(argc, argv, a.size[0]);
	if (a_is_sorted(a.tab, a.size[0]) == 1)
		return (0);
	aff_stack(a, b);
	if (a.size[0] == 3 || a.size[0] == 5)
		little_sort(a, b);
	else
		big_sort(a, b);
	aff_stack(a, b);
	return (0);
}
