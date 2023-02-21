/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:59:53 by rlevilla          #+#    #+#             */
/*   Updated: 2023/02/19 21:13:08 by rlevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int	*tab;
	int	*size;
}	t_stack;

void	ft_putint(int *tab, int size);
void	ft_putint_str(int *tab);
int		ft_atoi(const char *str);
long	ft_atol(const char *str);
//int	*ft_intcpy(int *tab, int argc);
int		ft_strcmp(char *s1, char *s2);
int		ft_check_duplicates(int argc, char **argv);
int		ft_check_error(int argc, char **argv);
int		check_error_argv(int argc, char **argv);
int		check_wrong_value(int argc, char **argv);
char	**ft_split(char const *s, char c);
int		check_onestr_value(char *s);
int		check_wrong_onestr_value(char **ptrptrs);
int		check_duplicates_split(char **ptrptrs);
int		check_error_onestr(char *str);
int		check_error_int_split(char **argv);
int		check_error_int_argv(int argc, char **argv);
int		countstr(char **ptrstr);
//int		*ft_intput_int_split(char *str);
//int		*ft_intput_int_argv(int argc, char **argv);
int		*ft_input(int argc, char **argv);
char	**argv_to_split(int argc, char **argv);
char	**one_str_to_split(char *str);
int		size_tab(int argc, char **argv);
int		*ft_split_to_int(int argc, char **argv);
int		*ft_convert_tab_to_index(int *tab, int size_a);
int		*final_tab(int argc, char **argv, int size_a);
int		*ft_sort_tabcpy(int *tab, int size_a);
int		a_is_sorted(int *tab, int size);
int		ft_tabsize(int *tab);
void	sa_swap_a(int *tab);
void	sb_swap_b(int *tab);
void	ss_swap_ss(int *tab1, int  *tab2);
void	pb_push_b(int *tab1, int *tab2, int size_a);
void	pa_push_a(int *tab1, int *tab2, int size_a, int flag);

#endif
