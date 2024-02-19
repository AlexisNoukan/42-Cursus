#  |  |  ___ \    \  |         |
#  |  |     ) |  |\/ |   _  |  |  /   _ 
# ___ __|  __/   |   |  (   |    <    __/ 
#    _|  _____| _|  _| \__,_| _|\_\ \___|
#                              by jcluzet
################################################################################
#                                     CONFIG                                   #
################################################################################

NAME        := game
CC        := gcc
FLAGS    := -Wall -Wextra -Werror -Iinclude -ldl -lglfw -pthread -lm ./mlx42/build/libmlx42.a
################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SRCS        :=      srcs/control.c \
                          srcs/parsing/element.c \
                          srcs/parsing/map.c \
                          srcs/parsing/parsing.c \
                          srcs/window.c \
                          srcs/movement/key_call.c \
                          srcs/texture/texture.c \
                          LibFt/GNL/get_next_line.c \
                          LibFt/GNL/get_next_line_bonus.c \
                          LibFt/GNL/get_next_line_utils.c \
                          LibFt/GNL/get_next_line_utils_bonus.c \
                          LibFt/libft/ft_atoi.c \
                          LibFt/libft/ft_bzero.c \
                          LibFt/libft/ft_calloc.c \
                          LibFt/libft/ft_isalnum.c \
                          LibFt/libft/ft_isalpha.c \
                          LibFt/libft/ft_isascii.c \
                          LibFt/libft/ft_isdigit.c \
                          LibFt/libft/ft_isprint.c \
                          LibFt/libft/ft_itoa.c \
                          LibFt/libft/ft_lstadd_back_bonus.c \
                          LibFt/libft/ft_lstadd_front_bonus.c \
                          LibFt/libft/ft_lstclear_bonus.c \
                          LibFt/libft/ft_lstdelone_bonus.c \
                          LibFt/libft/ft_lstiter_bonus.c \
                          LibFt/libft/ft_lstlast_bonus.c \
                          LibFt/libft/ft_lstmap_bonus.c \
                          LibFt/libft/ft_lstnew_bonus.c \
                          LibFt/libft/ft_lstsize_bonus.c \
                          LibFt/libft/ft_memchr.c \
                          LibFt/libft/ft_memcmp.c \
                          LibFt/libft/ft_memcpy.c \
                          LibFt/libft/ft_memmove.c \
                          LibFt/libft/ft_memset.c \
                          LibFt/libft/ft_putchar_fd.c \
                          LibFt/libft/ft_putendl_fd.c \
                          LibFt/libft/ft_putnbr_fd.c \
                          LibFt/libft/ft_putstr_fd.c \
                          LibFt/libft/ft_split.c \
                          LibFt/libft/ft_strchr.c \
                          LibFt/libft/ft_strdup.c \
                          LibFt/libft/ft_striteri.c \
                          LibFt/libft/ft_strjoin.c \
                          LibFt/libft/ft_strlcat.c \
                          LibFt/libft/ft_strlcpy.c \
                          LibFt/libft/ft_strlen.c \
                          LibFt/libft/ft_strmapi.c \
                          LibFt/libft/ft_strncmp.c \
                          LibFt/libft/ft_strnstr.c \
                          LibFt/libft/ft_strrchr.c \
                          LibFt/libft/ft_strtrim.c \
                          LibFt/libft/ft_substr.c \
                          LibFt/libft/ft_tolower.c \
                          LibFt/libft/ft_toupper.c \
                          LibFt/printf/ft_countdigit.c \
                          LibFt/printf/ft_decimal.c \
                          LibFt/printf/ft_hex.c \
                          LibFt/printf/ft_pointeurhex.c \
                          LibFt/printf/ft_printchar.c \
                          LibFt/printf/ft_printf.c \
                          LibFt/printf/ft_putnbr_u.c \
                          LibFt/printf/ft_putstr.c \
                          LibFt/printf/ft_selector.c \
                          LibFt/printf/ft_string.c \
                          LibFt/printf/ft_uint.c \
                          main.c \
                          
OBJS        := $(SRCS:.c=.o)

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

################################################################################
#                                  Makefile  objs                              #
################################################################################


CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m
RM		    := rm -f

${NAME}:	${OBJS}
			@echo "$(GREEN)Compilation ${CLR_RMV}of ${YELLOW}$(NAME) ${CLR_RMV}..."
			${CC} ${FLAGS} -o ${NAME} ${OBJS}
			@echo "$(GREEN)$(NAME) created[0m ✔️"

all:		${NAME}

bonus:		all

clean:
			@ ${RM} *.o */*.o */*/*.o
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:		clean
			@ ${RM} ${NAME}
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re:			fclean all

.PHONY:		all clean fclean re


