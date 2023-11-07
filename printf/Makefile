CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

INCDIR = includes


SRC = pf_printf.c\
	  pf_putchar.c\
	  pf_putstr.c\
	  pf_putnbr.c\
	  pf_hex.c\


BONUS = 



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
