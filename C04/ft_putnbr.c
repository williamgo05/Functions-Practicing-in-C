#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	long int	n;
	char		str;

	n = nb;
	if (n >= 0 && n <= 9)
	{
		str = n + '0';
		write (1, &str, 1);
		return;
	}
	if (n < 0)
	{
		n = -n;
		write (1, "-", 1);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putnbr(n % 10);
	write (1, "\n", 1);
}

int	main()
{
	int	nb;

	nb = -42;
	ft_putnbr(nb);
	return (0);
}
