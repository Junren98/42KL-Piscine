#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_base(int min, int max)
{
	if (min >= max)
		return (0);
	return (1);
}

int	*ft_range(int min, int max)
{
	int	*str;
	int	len;
	int	i;

	i = 0;
	if (ft_check_base(min, max) == 0)
		return (NULL);
	len = max - min;
	str = (int *) malloc ((sizeof(int) * len));
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}
