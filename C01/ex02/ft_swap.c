void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>

int	main(void)
{
	int	ab;
	int	ba;

	ab = 10;
	ba = 20;
	printf("Before swap:\nab = %d;\nba = %d;\n", ab, ba);
	ft_swap(&ab, &ba);
	printf("\nAfter swap:\nab = %d;\nba = %d;\n", ab, ba);
	return (0);
}

