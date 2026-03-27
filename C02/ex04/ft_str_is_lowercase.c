int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("Test3"));
	printf("%d\n", ft_str_is_lowercase("18"));
	printf("%d\n", ft_str_is_lowercase(""));
	printf("%d\n", ft_str_is_lowercase("teste"));
	printf("%d\n", ft_str_is_lowercase("\n"));
	printf("%d\n", ft_str_is_lowercase("%"));
	printf("%d\n", ft_str_is_lowercase("TESTE"));
	return (0);
}
