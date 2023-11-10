# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 11:38:23 by anoukan           #+#    #+#              #
#    Updated: 2023/11/10 19:26:07 by anoukan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

INCDIR = includes

#Libft

LIBFT_SRCDIR = LibFt
LIBFT_SRCS = $(wildcard $(LIBFT_SRCDIR)/*.c)
LIBFT = $(LIBFT_SRCS:$(LIBFT_SRCDIR)/%.c=$(LIBFT_SRCDIR)/%.o)

BONUS_SRCS = $(wildcard $(LIBFT_SRCDIR)/bonus/*.c)
BONUS = $(BONUS_SRCS:$(LIBFT_SRCDIR)/%.c=$(LIBFT_SRCDIR)/%.o)

#Printf

PTF_SRCDIR = Srcs
PTF_SRCS = $(wildcard $(PTF_SRCDIR)/*.c)
PTF = $(PTF_SRCS:$(PTF_SRCDIR)/%.c=$(PTF_SRCDIR)/%.o)

#Makefile Command

OBJ = $(LIBFT) $(BONUS) $(PTF)

INC = -I$(INCDIR)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ): %.o: %.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

