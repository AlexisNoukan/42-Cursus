# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 09:44:33 by anoukan           #+#    #+#              #
#    Updated: 2024/03/12 11:39:43 by anoukan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Werror -Wextra -Wall
CC = gcc
NAME = push_swap

SRC = ./src/push_swap.c\
		./src/utils/t_list.c\
		./src/utils/utils.c\

OBJ = $(SRC:.c=.o)

.PHONY: all clean fclean re lib

all: lib $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $@ $^ -L./LibFt/compiled -lft

$(OBJ): %.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

lib:
	@echo "Compiling in libft"
	@$(MAKE) -C ./LibFt

main:
	@echo "Compiling the main"
	CC FLAGS SRC

clean:
	@$(MAKE) -C ./LibFt clean
	rm -f $(OBJ)

fclean:
	@$(MAKE) -C ./LibFt clean
	rm -f $(NAME)

re: fclean all