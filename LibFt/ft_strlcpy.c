#include "stdio.h"
#include "string.h"
#include <stddef.h>
size_t	ft_strlcpy(char *dest, char const *str, size_t l)

{
	size_t	i;

	l = -1;
	i = 0;
	while (str[i] != '\0' && i < l - 1)
	{
		dest[i] = str[i];
		++i;
	}
	dest[i] = '\0';
	return (i);
}

int	main()
{
	char	s[] = "lala";
	char	d[5] = "lolo";
	int	l = 4;

	printf("%zu\n", strlcpy(d, s, l));
	printf("%zu\n", ft_strlcpy(d, s, l));
	return (0);
}
