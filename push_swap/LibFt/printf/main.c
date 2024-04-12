#include "libft.h"
#include <stdio.h>

int	ft_printf(const char *format, ...);

int	main(void)
{
	ft_printf("Testing my ft_printf implementation!\n");
	ft_printf("Printing integers: %d, %i\n", 42, -99);
	ft_printf("Printing characters: %c, %c\n", 'A', 'B');
	ft_printf("Printing strings: %s, %s\n", "Hello", "World");
	ft_printf("Printing hexadecimal: %x, %X\n", 255, 255);
	ft_printf("Printing floating point numbers: %f, %.2f\n", 3.14159, 6.789);
	return (0);
}
