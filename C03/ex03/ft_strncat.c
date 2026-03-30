char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
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
	char	dest[20] = "123";
	unsigned int	nb;

	nb = 8;
	printf("dest depois: %s\n", ft_strncat(dest, src, nb));
}
