#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr != '\0')
		ptr++;
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*ptr;
	int		len;

	i = 0;
	if (size == 0)
		return (malloc(sizeof(char)));
	while (i < size)
		len = len + ft_strlen(strs[i++]);
	len = len + (ft_strlen(sep) * (i - 1));
	ptr = (char *) malloc (sizeof(char) * (len + 1));
	*ptr = '\0';
	if (ptr != NULL)
	{
		i = 0;
		while (i < size)
		{
			ptr = ft_strcat(ptr, strs[i]);
			if (i + 1 < size)
				ptr = ft_strcat(ptr, sep);
			printf("the ptr is %s\n", ptr);
			i++;
		}
	}
	return (ptr);
}
