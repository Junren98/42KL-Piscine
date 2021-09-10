int	ft_testchar(char c)
{
	if (((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		test;
	char	*save;

	i = 0;
	save = str;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		if (i == 0 && (str[i] >= 97 && str[i] <= 122))
			str[i] = str[i] - 32;
		if (str[i] >= 97 && str[i] <= 122)
		{
			test = ft_testchar(str[i - 1]);
			if (test == 0)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (save);
}
