char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char		dest[15] = "";
	char		src[] = "Teste";
	unsigned int	n;

	n = sizeof(dest);
	printf("dest before: %s\n", dest);
	printf("dest after: %s\n", ft_strncpy(dest, src, n));
	return (0);
}
