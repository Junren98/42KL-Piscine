char	*ft_strlowcase(char *str)
{
	int		i;
	char	*save;

	i = 0;
	save = str;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90))
			str[i] = str[i] + 32;
		i++;
	}
	return (save);
}
