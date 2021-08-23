char	*ft_strcpy(char *dest, char *src)
{
	int		i;
	char	*save;

	i = 0;
	save = dest;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		printf("the index %d char is %c\n", i, dest[i]);
		i++;
	}
	dest[i] = '\0';
	printf("the index %d char is %c\n", i, dest[i]);
	return (save);
}
