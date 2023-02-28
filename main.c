/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 00:43:26 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/28 14:48:53 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
int	main(int argc, char **argv)
{
	int	*stack_a;
	//int	*stack_b;
	int	*tab;
	static int	size_a;
	//static int	size_b;

	//size_b = 0;
	if (ft_check_error(argc, argv) == 0)
		return (0);
	size_a = size_tab(argc, argv);
	//stack_b = (int *)malloc(sizeof(int) * (size_a + 1));
	tab = ft_input(argc, argv);
	stack_a = final_tab(tab, size_a);
	ft_printf("size_a = %d\n\n", size_a);
	ft_putint(tab, size_a);
	if (a_is_sorted(stack_a, size_a) == 1)
		return (0);
	pb_push_b(stack_a, stack_b, size_a);
	ft_putint(stack_a, size_a);
	ft_putint_str(stack_b);
	ft_printf("\n");
	pb_push_b(stack_a, stack_b, size_a);
	ft_putint(stack_a, size_a);
	ft_putint_str(stack_b);
	return (0);
}*/

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
	/*full_push_b(a, b, 6);
	aff_stack(a, b);
	rotate_b(b);
	rotate_a(a);
	aff_stack(a, b);
	r_rotate(a, b);
	aff_stack(a, b);
	reverse_rotate_a(a);
	reverse_rotate_b(b);
	aff_stack(a, b);
	r_reverse_rotate(a, b);
	r_reverse_rotate(a, b);
	r_reverse_rotate(a, b);
	r_reverse_rotate(a, b);
	aff_stack(a, b);
	full_push_a(a, b, 6);
	aff_stack(a, b);*/
	return (0);
}
