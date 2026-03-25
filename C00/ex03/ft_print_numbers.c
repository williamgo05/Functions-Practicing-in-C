#include <unistd.h>

void	ft_print_numbers(void)
{
	int	number;

	number = 48;
	while (number <= 57)
	{
		write (1, &number, 1);
		number++;
	}
}

int	main(void)
{
	ft_print_numbers();
	write (1, "\n", 1);
	return (0);
}
