#include <ctype.h>
#include <stdio.h>
int ft_isdigit(int c)
{

  if (c >= 0 && c <= 9)
    return(0);
  return(1);
}

int main()
{
  printf("%d", ft_isdigit(4));
  printf("%d", isdigit(4));
}
