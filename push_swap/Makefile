# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 09:44:33 by anoukan           #+#    #+#              #
#    Updated: 2024/03/04 13:33:53 by anoukan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Werror -Wextra -Wall
CC = gcc

SRC = ./src/push_swap.c

all: lib main

lib:
	@echo "Compiling in libft"
	@$(MAKE) -C ./LibFt

main:
	@echo "Compiling the main"
	CC FLAGS SRC