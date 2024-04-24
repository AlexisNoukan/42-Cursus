# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/23 14:36:40 by anoukan           #+#    #+#              #
#    Updated: 2024/04/24 23:04:11 by anoukan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = push_swap
SRC_DIR = src
UTILS_DIR = $(SRC_DIR)/utils
FONCTION_DIR = $(SRC_DIR)/functions
INIT_DIR = $(SRC_DIR)/init
SORT_DIR = $(SRC_DIR)/sort

# List all source files in functions directory
FUNCTION = $(wildcard $(FONCTION_DIR)/*.c)

# List all source files in utils directory
UTILS = $(wildcard $(UTILS_DIR)/*.c)

# List all source files in src directory
SRC = $(wildcard $(SRC_DIR)/*.c)

# List all source files in functions directory
INIT = $(wildcard $(INIT_DIR)/*.c)

# List all source files in functions directory
SORT = $(wildcard $(SORT_DIR)/*.c)

OBJ_DIR = obj

# Generate object file paths for all source files
OBJ_SRC = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
OBJ_FUNCTION = $(FUNCTION:$(FONCTION_DIR)/%.c=$(OBJ_DIR)/%.o)
OBJ_UTILS = $(UTILS:$(UTILS_DIR)/%.c=$(OBJ_DIR)/%.o)
OBJ_SORT = $(SORT:$(SORT_DIR)/%.c=$(OBJ_DIR)/%.o)
OBJ_INIT = $(INIT:$(INIT_DIR)/%.c=$(OBJ_DIR)/%.o)

# Combine object files from all sources
OBJ = $(OBJ_SRC) $(OBJ_FUNCTION) $(OBJ_UTILS) $(OBJ_INIT) $(OBJ_SORT)

# Compilation flags
FLAGS = -Wall -Wextra -Werror -g3

# Library flags
LIBS = -L./LibFt/compiled -lft -lgnl -g3 #-fsanitize=address #-lprintf

.PHONY: all clean fclean re lib

all: lib $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $@ $^ $(LIBS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(FLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(FONCTION_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(FLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(UTILS_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(FLAGS) -c $< -o $@

lib:
	@echo "Compiling in libft"
	@$(MAKE) -C ./LibFt

clean:
	@$(MAKE) -C ./LibFt clean
	rm -rf $(OBJ_DIR)

fclean: clean
	@$(MAKE) -C ./LibFt fclean
	rm -f $(NAME)

re: fclean all
