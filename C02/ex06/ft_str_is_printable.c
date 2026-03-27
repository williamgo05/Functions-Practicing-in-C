int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
	printf("%d\n", ft_str_is_printable("Test3"));
	printf("%d\n", ft_str_is_printable("18"));
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("teste"));
	printf("%d\n", ft_str_is_printable("\n"));
	printf("%d\n", ft_str_is_printable("%"));
	printf("%d\n", ft_str_is_printable("TESTE"));
	return (0);
}
