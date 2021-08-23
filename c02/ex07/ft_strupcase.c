char	*ft_strupcase(char *str)
{
	int		i;
	char	*save;

	i = 0;
	save = str;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122))
			str[i] = str[i] - 32;
		i++;
	}
	return (save);
}
