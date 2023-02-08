/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 00:43:26 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/07 17:48:46 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*tab;
	static int	*tab_final;
	static int	size;

	if (ft_check_error(argc, argv) == 0)
		return (0);
	size = size_tab(argc, argv);
	tab = ft_input(argc, argv);
	tab_final = final_tab(tab, size);
	if (a_is_sorted(tab_final, size) == 1)
		return (0);
	ft_putint_str(tab_final);
	return (0);
}
