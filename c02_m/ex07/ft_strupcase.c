#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		i;
	char	*save;

	i = 0;
	save = str;
	while (str[i] != '\0')
	{
		printf("the a is %c, and value is %d\n", str[i], str[i]);
		printf("the *str is %c\n", str[i]);
		if ((str[i] >= 97 && str[i] <= 122))
			str[i] = str[i] - 32;
		i++;
	}
	return (save);
}
