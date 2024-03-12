# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 09:44:33 by anoukan           #+#    #+#              #
#    Updated: 2024/03/12 11:24:42 by anoukan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Werror -Wextra -Wall
CC = gcc

SRC = ./src/push_swap.c\
		./src/utils/t_list.c\
		./src/utils/utils.c\

OBJ = $(SRC:.c=.o)

all: lib main 

main: $(OBJ)
	ar rc $(NAME) $(OBJ)

main: %.o: %.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

lib:
	@echo "Compiling in libft"
	@$(MAKE) -C ./LibFt

main:
	@echo "Compiling the main"
	CC FLAGS SRC

clean:
	@$(MAKE) -C ./LibFt clean

fclean:
	@$(MAKE) -C ./LibFt clean


re: fclean all