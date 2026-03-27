char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	dest[2] = "";
	char	src[] = "Teste";

	printf("dest before: %s\n", dest);
	printf("dest after: %s\n", ft_strcpy(dest, src));
	return (0);
}
