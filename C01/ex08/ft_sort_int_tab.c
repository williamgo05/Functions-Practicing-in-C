void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

#include <stdio.h>

int	main(void)
{
	int	tab[] = {12, 55, 2, 13, 56, 1, 99, 5};
	int	i;
	int	size;

	size = sizeof(tab) / sizeof(tab[0]);
	i = 0;
	ft_sort_int_tab(tab, size);
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
