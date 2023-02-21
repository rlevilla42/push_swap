/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:26:51 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/21 15:13:36 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
void	pa_push_a(int *tab1, int *tab2, int size_a)
{
	int	i;
	int	size_b;

	//i = ft_tabsize(tab1);
	i = size_a;
	while (i >= 0)
	{
		tab1[i + 1] = tab1[i];
		i -= 1;
	}
	tab1[0] = tab2[0];
	i = 0;
	size_b = ft_tabsize(tab2);
	while (i <= size_b)
	{
		//ft_printf("i = %d\n", i);
		tab2[i] = tab2[i + 1];
		//ft_printf("tab[%d] = %d\n", i, tab2[i]);
		i++;
	}
	//ft_printf("tab2[%d] = %d\n\n", i, tab2[i]);
	size_a++;
	ft_printf("pa\n");
}
*/
void	stack_who_pushed(t_stack x)
{
	int	i;
	int	last_index;

	i = 0;
	while (i < x.size[0])
	{
		x.tab[i] = x.tab[i + 1];
		i++;
	}
	x.size[0] -= 1;
	last_index = x.size[0];
	x.tab[last_index] = 0;
}

void	stack_who_been_pushed(t_stack y, t_stack z)
{
	int	i;

	i = z.size[0] - 1;
	while (i >= 0)
	{
		z.tab[i + 1] = z.tab[i];
		i--;
	}
	z.tab[0] = y.tab[0];
	z.size[0] += 1;
	//stack_who_pushed(y);
}

void	pb_push_b(t_stack a, t_stack b)
{
	int	j;

	j = b.size[0] - 1;
	if (a.size[0] == 0)
		return ;
	if (b.size[0] == 0)
	{
		b.tab[0] = a.tab[0];
		b.size[0] += 1;
		stack_who_pushed(a);
		return ;
	}
	else if (b.size[0] == 1)
	{
		j = 0;
		b.tab[j + 1] = b.tab[j];
		b.tab[0] = a.tab[0];
		b.size[0] += 1;
		stack_who_pushed(a);
		return ;
	}
	stack_who_been_pushed(a, b);
	stack_who_pushed(a);
}

int	main(void)
{
	// adapter tout ce int main aux struct t_stack a et b et tester push_b
	t_stack	a;
	t_stack	b;

	int	tab[] = {9, 2, 0, 1, 3};
	int	*tab2 = (int *)malloc(sizeof(int) * (a.size[0] + 1));
	int	size_tab[] = {5};

	a.tab = tab;
	a.size = size_tab;
	b.tab = tab2;

	ft_putint(a.tab, a.size[0]);
	ft_printf("\n");
	pb_push_b(a, b);
	ft_putint(a.tab, a.size[0]);
	ft_printf("\n");
	ft_putint(b.tab, b.size[0]);
	ft_printf("\n");
	pb_push_b(a, b);
	ft_putint(a.tab, a.size[0]);
	ft_printf("\n");
	ft_printf("\n");
	ft_putint(b.tab, b.size[0]);
	ft_printf("\n");
	pb_push_b(a, b);
	ft_putint(a.tab, a.size[0]);
	ft_printf("\n");
	ft_putint(b.tab, b.size[0]);
	pb_push_b(a, b);
	ft_putint(a.tab, a.size[0]);
	ft_printf("\n");
	ft_putint(b.tab, b.size[0]);

}

/*
int 	main(void)
{
	int	tab1[10] = {9, 2, 0, 1, 3};
	int	tab2[45] = {14, 35, 99, 1, 458, 12, -1};
	
	//int	*tab2 = malloc(sizeof(int) * (ft_tabsize(tab1) + 1));
	ft_putint(tab1, 5);
	ft_printf("tab1[bonus 5] = %d\n", tab1[5]);
	ft_printf("tab1[bonus 6] = %d\n", tab1[6]);
	ft_printf("tab1[bonus 7] = %d\n", tab1[7]);
	ft_printf("\n");
	ft_putint_str(tab2);
	ft_printf("tab2[bonus 6] = %d\n", tab2[6]);
	ft_printf("tab2[bonus 7] = %d\n", tab2[7]);
	pb_push_b(tab1, tab2, 5);
	ft_putint(tab1, 5);
	ft_printf("tab1[bonus 6] = %d\n", tab1[6]);
	ft_printf("tab1[bonus 7] = %d\n", tab1[7]);
	ft_printf("tab1[bonus 8] = %d\n", tab1[8]);
	ft_printf("\n");
	ft_putint_str(tab2);
	ft_printf("tab2[bonus 7] = %d\n", tab2[7]);
	ft_printf("tab2[bonus 8] = %d\n", tab2[8]);

}*/
