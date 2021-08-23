char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;
	char	*save;

	i = 0;
	save = dest;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		printf("the index %d char is %c\n", i, dest[i]);
		i++;
	}
	//create another while
	while (i < n)
	{
		dest[i] = '\0';
		printf("the index %d char is %c\n", i, dest[i]);
		i++;
	}

	printf("the index %d char is %c\n", i, dest[i]);
	return (save);
}
