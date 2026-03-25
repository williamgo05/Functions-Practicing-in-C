#include <unistd.h>

void	ft_print_comb(void)
{
	char	cent;
	char	dezen;
	char	uni;

	cent = '0';
	while (cent <= '7')
	{
		dezen = cent + 1;
		while (dezen <= '8')
		{
			uni = dezen + 1;
			while (uni <= '9')
			{
				write (1, &cent, 1);
				write (1, &dezen, 1);
				write (1, &uni, 1);
				uni++;
				if (cent < '7')
					write (1, ", ", 1);
			}
			dezen++;
		}
		cent++;
	}
}

int	main(void)
{
	ft_print_comb();
	write (1, "\n", 1);
	return (0);
}
