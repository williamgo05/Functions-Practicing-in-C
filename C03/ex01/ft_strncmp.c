int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char) s2[i]);
}

#include <stdio.h>

int	main(void)
{
	char	s1[] = "TEst";
	char	s2[] = "testa";
	unsigned int	n;

	n = 1;
	printf("%d\n", ft_strncmp(s1, s2, n));
	return (0);
}
