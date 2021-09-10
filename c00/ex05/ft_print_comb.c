#include <unistd.h>
void	ft_print(char a, char b, char c);

void	ft_putchar(char c)
{
	write(1, &c, sizeof (c));
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				ft_print(a, b, c);
				c++;
			}
			if (b != '9')
				c = '0';
			b++;
		}
		if (a != 9)
			b = '0';
		a++;
	}
}

void	ft_print(char a, char b, char c)
{
	if (a < b && b < c)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (a != '7')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}
