#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(void)
{
	char	s1[] = "testa";
	char	s2[] = "teste";

	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}
