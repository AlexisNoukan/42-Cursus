command pour compiler

cc main.c ./srcs/parsing/element.c ./srcs/parsing/map.c ./srcs/parsing/parsing.c ./srcs/window.c ./mlx42/build/libmlx42.a -Iinclude -lglfw -L"/opt/homebrew/Cellar/glfw/3.3.9/lib"

mac os flag

-framework Cocoa -framework OpenGL -framework IOKit

command mac os

cc main.c ./srcs/parsing/element.c ./srcs/parsing/map.c ./srcs/parsing/parsing.c ./srcs/window.c ./mlx42/build/libmlx42.a -Iinclude -lglfw

commande pour compiler un main sur linux

cc -LLibFt/compiled main.c -lgnl -lprintf -lft

cc -LLibFt/compiled main.c ./srcs/parsing/element.c ./srcs/parsing/map.c ./srcs/parsing/parsing.c ./srcs/window.c -lgnl -lprintf -lft

cc -LLibFt/compiled main.c ./srcs/parsing/element.c ./srcs/parsing/map.c ./srcs/parsing/parsing.c ./srcs/window.c -lgnl -lprintf -lft ./mlx42/build/libmlx42.a -Iinclude -ldl -lglfw -pthread -lm
