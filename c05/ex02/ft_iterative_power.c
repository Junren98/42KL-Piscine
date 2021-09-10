int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	base_nb;

	i = 0;
	base_nb = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i < power)
	{
		nb = nb * base_nb;
		i++;
	}
	return (nb);
}
