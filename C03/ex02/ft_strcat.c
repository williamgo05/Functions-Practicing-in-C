char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	src[] = "456";
	char	dest[9] = "123";

	printf("dest depois: %s\n", ft_strcat(dest, src));
	return (0);
}
