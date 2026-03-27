unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

#include <stdio.h>

int	main(void)
{
	char		dest[2] = "";
	char		src[] = "abc";
	unsigned int	size;

	size = sizeof (dest);
	printf("Sizeof: %d\n", size);
	printf("dest antes: %s\n", dest);
	printf("src para passar: %s\n", src);
	printf("Tamanho total que seria: %d\n", ft_strlcpy(dest, src, size));
	printf("dest depois: %s\n", dest);
	return (0);
}
