command pour compiler

gcc -Wall -Wextra -Werror main.c ./mlx42/build/libmlx42.a -Iinclude -ldl -lglfw -pthread -lm

mac os flag

-framework Cocoa -framework OpenGL -framework IOKit

command mac os

gcc main.c libmlx42.a -Iinclude -lglfw

compil command mac

cc main.c ./mlx42/build/libmlx42.a -Iinclude -lglfw -L"/opt/homebrew/Cellar/glfw/3.3.9/lib/"
