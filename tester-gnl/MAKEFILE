# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 12:59:54 by anoukan           #+#    #+#              #
#    Updated: 2024/01/18 11:12:49 by anoukan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = tester

INCDIR = includes

SRC = $(wildcard ./src/*.c) $(wildcard ./main/*.c)

BONUS = $(wildcard ./bonus/*.c)

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(BONUS:.c=.o)

INC = -I$(INCDIR)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

bonus: $(BONUS) $(OBJ_BONUS)
	ar rc $(NAME) $(OBJ_BONUS)


$(OBJ): %.o: %.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all