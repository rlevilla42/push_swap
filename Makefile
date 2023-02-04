# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlevilla <rlevilla@student.42lausanne.ch>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 02:35:28 by rlevilla          #+#    #+#              #
#    Updated: 2023/01/27 18:18:47 by rlevilla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_LIST	= check_error_argv.c check_error_int.c check_error_onestr.c ft_atol.c ft_strcmp.c ft_check_error.c\
\

DIR_SRCS = srcs/
DIR_OBJS = objs/
SRCS = ${addprefix ${DIR_SRCS}, ${SRCS_LIST}}

OBJS	= ${SRCS:%.c=%.o}

LIBFT = libft

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

OPTIONS	= -I

NAME	= push_swap

all:	${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${LIBFT}:
		${MAKE} -C /libft/

${NAME}: ${OBJS} ${LIBFT}
	${CC} ${CFLAGS} main.c ${OBJS} -Llibft -lft -o ${NAME}

clean:
			${RM} ${OBJS}

fclean:	clean
				${RM} ${NAME}
re:	fclean all

.PHONY: clean fclean all re
