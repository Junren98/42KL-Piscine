unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	
	i = 0;
	//if size large then how gg 
	while (i < (size - 1))
	{
		dest[i] = src[i];
		printf("the index %d char is %c\n", i, dest[i]);
		i++;
	}
	dest[size - 1] = '\0';
	printf("the index %d char is %c\n", i, dest[i]);
	while (src[i] != '\0')
		i++;
	return (i);
}
