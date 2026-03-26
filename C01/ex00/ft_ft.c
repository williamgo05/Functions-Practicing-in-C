void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>

int	main(void)
{
	int	nbr;

	nbr = 5;
	printf("nbr antes: %d\n", nbr);
	ft_ft(&nbr);
	printf("nbr depois: %d\n", nbr);
	return (0);
}
