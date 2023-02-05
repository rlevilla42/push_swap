/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 19:28:06 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/05 20:16:59 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_error(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else if (argc == 2)
	{
		if (check_error_onestr(argv[1]) == 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	else if (check_error_argv(argc, argv) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	//printf("ALL Perfecto !");
	return (1);
}
