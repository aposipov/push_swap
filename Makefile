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
HEADER = ./inc/push_swap.h

SRC = ./src/push_swap.c ./src/ft_error.c ./src/ft_split.c ./src/utils_lib.c


OBJ = ${patsubst %.c,%.o,${SRC}}
RM = rm -f

RED='\033[4;31m'
GREEN='\033[4;32m'
NC='\033[0;0m'


all:		${NAME}

${NAME}:	${OBJ}
			$(CC) $(FLAGS) $(FLAGS_M) $(OBJ) -o $(NAME)

%.o : %.c	Makefile ${HEADER}
			${CC} ${FLAGS} -c $< -o $@

clean:
			${RM} ${OBJ}
			@echo $(RED) *.o files is clean!$(NC)

fclean:		clean
			${RM} ${NAME}
			@echo $(GREEN)All files is clean!$(NC)

re: 		fclean all

norm:
			norminette $(SRC) $(HEADER)

.PHONY: all clean fclean re norm
