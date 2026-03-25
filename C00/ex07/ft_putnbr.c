#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int	n;
	char	nb_char;

	n = nb;
	if (n < 0)
	{
		n = -n;
		write (1, "-", 1);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	nb_char = (n % 10) + '0';
	write (1, &nb_char, 1);
}

int	main(void)
{
	ft_putnbr(4422);
	write (1, "\n", 1);
	return (0);
}

