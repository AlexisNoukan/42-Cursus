# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/20 17:03:59 by saliinger         #+#    #+#              #
#    Updated: 2024/04/22 18:49:42 by anoukan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_SERVER = server
NAME_CLIENT = client
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
SRCDIR= ./src

SRC_CLIENT =	$(SRCDIR)/client/client.c



SRC_SERVER =	$(SRCDIR)/server/server.c\

OBJ_CLIENT = $(SRC_CLIENT:.c=.o)
OBJ_SERVER = $(SRC_SERVER:.c=.o)

LIBFT = libft/libft.a
MAKE_LIBFT = make -C libft

.PHONY: all clean fclean re

all: $(NAME_CLIENT) $(NAME_SERVER)

$(NAME_CLIENT): $(OBJ_CLIENT)
	$(MAKE_LIBFT)
	$(CC) $(CFLAGS) $(OBJ_CLIENT) $(LIBFT) -o $(NAME_CLIENT)

$(NAME_SERVER): $(OBJ_SERVER)
	$(MAKE_LIBFT)
	$(CC) $(CFLAGS) $(OBJ_SERVER) $(LIBFT) -o $(NAME_SERVER)

clean:
	rm -rf $(OBJ_SERVER) $(OBJ_CLIENT)
	$(MAKE_LIBFT) clean

fclean: clean
	rm -rf $(NAME_SERVER) $(NAME_CLIENT)
	$(MAKE_LIBFT) fclean

re: fclean all


