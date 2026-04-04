#include <unistd.h>

void	ft_putchar(char i)
{
	write (1, &i, 1);
	write (1, "\n", 1);
}


int	main(void)
{
	ft_putchar('x');
	return (0);
}
