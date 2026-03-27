int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
	printf("%d\n", ft_str_is_uppercase("Test3"));
	printf("%d\n", ft_str_is_uppercase("18"));
	printf("%d\n", ft_str_is_uppercase(""));
	printf("%d\n", ft_str_is_uppercase("teste"));
	printf("%d\n", ft_str_is_uppercase("\n"));
	printf("%d\n", ft_str_is_uppercase("%"));
	printf("%d\n", ft_str_is_uppercase("TESTE"));
	return (0);
}
