# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lchristi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 17:31:37 by lchristi          #+#    #+#              #
#    Updated: 2022/03/03 17:31:42 by lchristi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
FLAGS = -Wall -Wextra -Werror
HEADER = push_swap.h

libft_ = libft/libft.a

SRCS =	check.c\
		push_swap.c\
		ins_s_p.c\
		ins_r.c\
		ins_rr.c\
		utils.c\
		sorting.c\
		index.c\
		sorting_utils.c

OBJ = $(patsubst %.c, %.o, $(SRCS))

RED='\033[4;31m'
GREEN='\033[0;32m'
NC='\033[0;0m'

.PHONY:	all clean fclean re norm libft

all:	$(NAME)

$(NAME):	$(OBJ) $(libft_)
			$(CC) $(FLAGS) $(OBJ) $(libft_) -o $(NAME)
			@echo $(GREEN)Pushswap compiled!$(NC)

%.o : %.c 	Makefile $(HEADER)
			$(CC) $(FLAGS) -c $< -o $@

$(libft_):	libft
			make -C libft

clean:
			rm -f $(OBJ)
			make -C libft clean
			@echo $(RED) *.o files is clean!$(NC)

fclean:		clean
			rm -f $(NAME)
			make -C libft fclean
			@echo $(RED)All files is clean!$(NC)

re:			fclean all

norm:
			@norminette $(HEADER) $(SRCS) libft
