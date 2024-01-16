#include <stdlib.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	*a = "a";
	int		i = 2;
	char	*d;

	d = malloc(i * sizeof(char));
	printf("%s", ft_strncpy(d, a, i));
	return (0);
}
