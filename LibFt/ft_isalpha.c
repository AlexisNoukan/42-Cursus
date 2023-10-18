#include <stdio.h>
int  ft_isalpha(char str)
{
  if (str == '\0')
    return(1);
  if (!((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z')))
    return(1);
  return(0);
}

int main()
{
  char  c = 'C';
  int i = ft_isalpha(c);
  printf("%d", i);
}



