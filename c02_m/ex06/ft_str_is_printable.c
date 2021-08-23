#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int		i;
	char	a;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		a = str[i];
		printf("the a is %c, and value is %d\n", a, a);
		printf("the *str is %c\n", str[i]);
		if (!(a >= 32 && a <= 127))
			return (0);
		i++;
	}
	return (1);
}
