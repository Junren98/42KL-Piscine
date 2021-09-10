#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, (str + i), 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb /10);
		ft_putnbr(8);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}


void ft_show_tab(struct s_stock_str *par)
{
    int i;

    i = 0;
    while (par->str != 0)
    {
        ft_putstr(par->str);
        ft_putchar('\n');
        ft_putnbr(par->size);
        ft_putchar('\n');
        ft_putstr(par->copy);
        ft_putchar('\n');
        par++;
    }
}