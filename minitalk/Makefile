# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saliinger <saliinger@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/20 17:03:59 by saliinger         #+#    #+#              #
#    Updated: 2024/04/20 19:15:53 by saliinger        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_SERVER= server
NAME_CLIENT= client
CC= gcc
CFLAGS= -Wall -Wextra -Werror

SRC_CLIENT= ./client/client.c

OBJ_SERVER= ${SRC_CLIENT: .c=.o}

SRC_SERVER= ./server/server.c

OBJ_SERVER= ${SRC_SERVER: .c=.o}

LIBFT= libft/libft.a
MAKE_LIBFT= make -c libft

.PHONY: all, clean, fclean, re

all: $(NAME_CLIENT) $(NAME_SERVER)

$(NAME_CLIENT):	$(OBJ_CLIENT)
				$(MAKE_LIBFT)
				$(MAKE_LIBFT) bonus
				$(CC) $(CFLAGS) $(OBJ_CLIENT) $(LIBFT) -o $(NAME_CLIENT)
				
$(NAME_SERVER):	$(OBJ_SERVER)
				$(MAKE_LIBFT)
				$(MAKE_LIBFT) bonus
				$(CC) $(CFLAGS) $(OBJ_SERVER) $(LIBFT) -o $(NAME_SERVER)				

clean:
	rm -rf $(OBJ_SERVER) $(OBJ_CLIENT)
	$(MAKE_LIBFT) clean

fclean:	clean
	rm -rf $(NAME_SERVER) $(NAME_CLIENT)
	$(MAKE_LIBFT) fclean

re : fclean all

