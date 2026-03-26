#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a % *b;
	*a = *a / *b;
	*b = temp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	printf("Before:\na = %d;\nb = %d;\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("After:\na = %d;\nb = %d;\n", a, b);
	return (0);
}

