void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <stdio.h>

int	main(void)
{
	int	n;
	int	*nbr1;
	int	**nbr2;
	int	***nbr3;
	int	****nbr4;
	int	*****nbr5;
	int	******nbr6;
	int	*******nbr7;
	int	********nbr8;

	n = 10;
	nbr1 = &n;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	printf("nbr antes: %d\n", n);
	ft_ultimate_ft(&nbr8);
	printf("nbr depois: %d\n", n);
}

