int	ft_check_nve(int count)
{
	if (count % 2 == 0)
		return (1);
	else
		return (-1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	count_nve;

	i = 0;
	count_nve = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count_nve++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10;
		num = num + str[i] - '0';
		i++;
	}
	count_nve = ft_check_nve(count_nve);
	return (count_nve * num);
}
