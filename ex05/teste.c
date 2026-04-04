unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	len = 0;
	while (src[len] != '\0')
	{
		len ++;
	}
	i = 0;
	while (i < size && dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while ((i + j) < size - 1 && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	if ((i + j) < size)
	{
		dest[i + j] = '\0';
	}
	return (len + i);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	char	src[] = "xyz";
	char	dest[10] = "abcdef";
	unsigned int	size;

	size = sizeof dest;
	printf("Antes:\n");
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("sizeof: %d\n", size);
	printf("\n");
	printf("Depois:\n");
	printf("Qntd que tentou criar: %d\n", ft_strlcat(dest, src, 6));
	printf("dest: %s\n", dest);
	printf("função: %lu\n", strlcat(dest, src, 0));
	return(0);
}
