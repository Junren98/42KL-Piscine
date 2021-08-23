#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	ft_array_size(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	ft_valid_base(char *base, int base_size)
{
	int	i;
	int	j;

	i = 0;
	if (base_size == 0 || base_size == 1)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	symbol;
	int		base_size;

	base_size = ft_array_size(base);
	if (ft_valid_base(base, base_size) == 1)
	{
		if ((nbr != -2147483648) && nbr < 0)
		{
			ft_putchar('-');
			nbr = (nbr * -1);
		}
		symbol = nbr % base_size;
		nbr = nbr / base_size;
		if (nbr != 0)
			ft_putnbr_base(nbr, base);
		ft_putchar(*(base + symbol));
	}
}
