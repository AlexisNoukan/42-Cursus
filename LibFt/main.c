#include "libft.h"
#include <stdio.h>

void *ft_null(void)
{
    return (NULL);
}

int main(void)
{
    char str[] = "  Hello World! /sfas";
    ft_substr("  Hello World!/sfas", 3, 14);
    printf("%p", str);
    ft_substr(ft_null(), 3, 14);
}