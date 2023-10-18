#include <stdio.h>
int  ft_isalpha(char str)
{
  int  i;

  i = 0;
  if (str == `\0`)
    return(1);
  if (!((str >= 'A' && str <= 'Z') || \
				(str >= 'a' && str <= 'z')))
    return(0);
  return(1);
}

int main()
{
  char  c;
  int   i;
  c = "C";
  i = ft_isalpha(c); 
  printf("%d", i);

}


