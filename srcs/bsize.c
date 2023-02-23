/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsize.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:11:08 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/23 16:17:38 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*bsize(int argc, char **argv)
{
	//int	j;
	//char	**pstr;
	int	*size;

	(void)argc;
	(void)argv;
	size = (int *)malloc(sizeof(int) * 1);
	/*j = 0;
	if (argc == 2)
		pstr = one_str_to_split(argv[1]);
	else
		pstr = argv_to_split(argc, argv);
	while (pstr[j] != NULL)
		j++;*/
	size[0] = 0;
	return (size);
}
