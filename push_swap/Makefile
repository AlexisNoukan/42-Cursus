# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 09:44:33 by anoukan           #+#    #+#              #
#    Updated: 2024/03/12 13:54:02 by anoukan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = push_swap
SRC_DIR = src
UTILS_DIR = $(SRC_DIR)/utils

SRC =	$(SRC_DIR)/push_swap.c\
		$(UTILS_DIR)/t_list.c\
		$(UTILS_DIR)/utils.c

OBJ_DIR = obj
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

.PHONY: all clean fclean re lib

all: lib $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(FLAGS) -c $< -o $@

lib:
	@echo "Compiling in libft"
	@$(MAKE) -C ./LibFt

clean:
	@$(MAKE) -C ./LibFt clean
	rm -rf $(OBJ_DIR)

fclean:
	@$(MAKE) -C ./LibFt fclean
	rm -rf $(OBJ_DIR)
	rm -f $(NAME)

re: fclean all
