unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
	{
		i++;
	}
	while (src[j] != '\0' && (i + j) < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
	{
		dest[i + j] = '\0';
	}
	while (src[j])
	{
		j++;
	}
	return (i + j);
}

#include <stdio.h>

int	main()
{
	char	dest[5] = "123";
	char	src[] = "456789105789";
	unsigned int	size;

	size = 5;
	printf("Qntd que tentou criar: %d\n", ft_strlcat(dest, src, size));
	printf("dest depois: %s\n", dest);
	return(0);
}
