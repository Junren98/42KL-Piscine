#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	char	*ptr;

	str = (char *) malloc ((ft_strlen(src) + 1));
	if (str == NULL)
		return (0);
	ptr = str;
	while (*src)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (str);
}
