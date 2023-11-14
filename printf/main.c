#include <stdio.h>
#include "Srcs/ft_printf.h"

/*
int main(void)
{
    // Test 1: Integer
    int count_printf = printf("Original printf count: %d\n", 42);
    int count_ft_printf = ft_printf("ft_printf count: %d\n", 42);
    printf("\n");

    // Test 2: String
    count_printf = printf("Original printf count: %s\n", "Hello, World!");
    count_ft_printf = ft_printf("ft_printf count: %s\n", "Hello, World!");
    printf("\n");

    // Test 3: Character
    count_printf = printf("Original printf count: %c\n", 'A');
    count_ft_printf = ft_printf("ft_printf count: %c\n", 'A');
    printf("\n");

    // Test 4: Unsigned Integer
    count_printf = printf("Original printf count: %u\n", 12345);
    count_ft_printf = ft_printf("ft_printf count: %u\n", 12345);
    printf("\n");

    // Add more tests as needed

    // To avoid the "set but not used" warning, you can use the counts in some meaningful way
    printf("Total counts: %d %d\n", count_printf, count_ft_printf);

    return 0;
}*/


int main(void)
{
    char *ptr = NULL; // Pointer set to NULL (dereferencing a NULL pointer causes a segfault)
    printf("%s\n", ptr); // Attempting to dereference a NULL pointer

    return 0;
}

