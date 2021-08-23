#include <stdio.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		count_dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	count_dest = i;
	while ((i + 1 < size) && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	while (src[j] != '\0')
		j++;
	printf("the value of count_dest is %d, j value is %d\n", count_dest, j);
	if (size >= count_dest)
		return (j + count_dest);
	else
		return (j + size);
}
