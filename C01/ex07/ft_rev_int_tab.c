void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	first;
	int	last;

	first = 0;
	last = size - 1;
	while (first < last)
	{
		temp = tab[first];
		tab[first] = tab[last];
		tab[last] = temp;
		first ++;
		last--;
	}
}

#include <stdio.h>

int	main(void)
{
	int	tab[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int	size;
	int	i;

	size = 10;
	i = 0;
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
		if (i < size)
			printf(", ");
	}
	printf("\n");
	return (0);
}

