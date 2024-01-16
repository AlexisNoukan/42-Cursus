#include <stdio.h>

int	ft_len(char *stash)
{
	int	len;

	len = 0;
	while (stash[len] != '\n' && stash[len] != '\0')
		len++;
	return (len);
}

int	main(void)
{
	char *stash = "12345678901234567890123456789012345678901";

	return(printf("%d\n", ft_len(stash)));
}
