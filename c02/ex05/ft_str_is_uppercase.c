int	ft_str_is_uppercase(char *str)
{
	int		i;
	char	a;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		a = str[i];
		if (!(a >= 'A' && a <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
