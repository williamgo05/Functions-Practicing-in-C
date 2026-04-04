int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

#include <stdio.h>

int	main(void)
{
	printf("Size: %d\n", ft_strlen("William"));
}
