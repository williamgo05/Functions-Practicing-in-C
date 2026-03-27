int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
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
	printf("%d\n", ft_str_is_alpha("Test3"));
	printf("%d\n", ft_str_is_alpha("18"));
	printf("%d\n", ft_str_is_alpha(""));
	printf("%d\n", ft_str_is_alpha("Teste"));
	printf("%d\n", ft_str_is_alpha("\n"));
	printf("%d\n", ft_str_is_alpha("%"));
	return (0);
}
