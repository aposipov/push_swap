# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lchristi <lchristi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/27 17:58:54 by lchristi          #+#    #+#              #
#    Updated: 2021/12/27 17:58:57 by lchristi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
FLAGS = -Wall -Wextra -Werror
HEADER = push_swap.h

SRC =
OBJ = ${patsubst %.c,%.o,${SRC}}
RM = rm -f

all:		${NAME}

${NAME}:	${OBJ}
			ar rcs ${NAME} $?

%.o : %.c	Makefile ${HEADER}
			${CC} ${FLAGS} -c $< -o $@

clean:
			${RM} ${OBJ}

fclean:	clean
			${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
