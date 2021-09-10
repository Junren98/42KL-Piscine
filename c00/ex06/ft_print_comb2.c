#include <unistd.h>
void	ft_print_digits(char a, char b);
void	ft_print_combination(char a, char b, char c, char d);

void	ft_putchar(char c)
{
	write(1, &c, sizeof(c));
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = '0';
	b = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			ft_print_digits(a, b);
			b++;
		}
		if (a != '9')
			b = '0';
		a++;
	}
}

void	ft_print_digits(char a, char b)
{
	char	c;
	char	d;

	c = a;
	d = b + 1;
	while (c <= '9')
	{
		while (d <= '9')
		{
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(' ');
			ft_putchar(c);
			ft_putchar(d);
			ft_print_combination(a, b, c, d);
			d++;
		}
		if (c != '9')
			d = '0';
		c++;
	}
}

void	ft_print_combination(char a, char b, char c, char d)
{
	if (a + b + c + d != 227)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}		
	if (a == '8' && b == '9' && c == '9' && d == '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
