char	*ft_strstr(char *dest, char *to_find)
{
	int		i;
	int		j;
	int		a;

	i = 0;
	if (*to_find == '\0')
		return (dest);
	while (dest[i] != '\0')
	{
		j = 0;
		a = i;
		while (dest[a] == to_find[j])
		{
			a++;
			j++;
			if (to_find[j] == '\0')
				return (dest + a - j);
		}
		i++;
	}
	return (0);
}
