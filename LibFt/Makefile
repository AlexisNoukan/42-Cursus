.PHONY: all libft printf GNL clean fclean re

all: libft printf GNL

libft:
	@echo "Compiling in libft"
	@$(MAKE) -C ./libft

printf:
	@echo "Compiling in printf"
	@$(MAKE) -C ./printf

GNL:
	@echo "Compiling in GNL"
	@$(MAKE) -C ./GNL

clean:
	@$(MAKE) -C ./libft clean
	@$(MAKE) -C ./printf clean
	@$(MAKE) -C ./GNL clean

fclean:
	@$(MAKE) -C ./libft fclean
	@$(MAKE) -C ./printf fclean
	@$(MAKE) -C ./GNL fclean

re: fclean all
