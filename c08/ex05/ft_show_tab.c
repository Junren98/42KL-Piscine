#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, (str + i), 1);
		i++;
	}
}
void	ft_putchar(char c)
{
	write(1, &c, sizeof(c));
}


void ft_show_tab(struct s_stock_str *par)
{
    while (par)
    {
        ft_putstr(par->str);
        ft_putchar('\n');
        ft_putchar(par->size + 48);
        ft_putchar('\n');
        ft_putstr(par->copy);
        par++;
    }
}