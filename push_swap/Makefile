CC = gcc
NAME = push_swap
SRC_DIR = src
UTILS_DIR = $(SRC_DIR)/utils
FONCTION_DIR = $(SRC_DIR)/functions

# List all source files in functions directory
FUNCTION = $(wildcard $(FONCTION_DIR)/*.c)

# List all source files in utils directory
UTILS = $(wildcard $(UTILS_DIR)/*.c)

# List all source files in src directory
SRC = $(wildcard $(SRC_DIR)/*.c)

OBJ_DIR = obj

# Generate object file paths for all source files
OBJ_SRC = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
OBJ_FUNCTION = $(FUNCTION:$(FONCTION_DIR)/%.c=$(OBJ_DIR)/%.o)
OBJ_UTILS = $(UTILS:$(UTILS_DIR)/%.c=$(OBJ_DIR)/%.o)

# Combine object files from all sources
OBJ = $(OBJ_SRC) $(OBJ_FUNCTION) $(OBJ_UTILS)

# Compilation flags
FLAGS = -Wall -Wextra -Werror 

# Library flags
LIBS = -L./LibFt/compiled -lft -lprintf -lgnl

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
