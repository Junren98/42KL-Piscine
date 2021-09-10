#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, sizeof (c));
}

void	ft_is_negative(int n)
{
	char	positive;
	char	negative;

	positive = 'P';
	negative = 'N';
	if (n >= 0)
		ft_putchar(positive);
	else
		ft_putchar(negative);
}
