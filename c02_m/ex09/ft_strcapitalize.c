#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	*save;

	i = 0;
	save = str;
	while (str[i] != '\0')
	{
		//printf("the a is %c, and value is %d\n", str[i], str[i]);
		//printf("the *str is %c\n", str[i]);

		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;

		if (i == 0 && (str[i] >= 97 && str[i] <= 122))
			str[i] = str[i] - 32;

		if (str[i] >= 97 && str[i] <= 122)
		{
			//know is a char before is not alphanumeric char then it will be capitalize
			if ( !((str[i-1] >= 48 && str[i-1] <= 57) || (str[i-1] >= 65 && str[i-1] <= 90) || (str[i-1] >= 97 && str[i-1] <= 122)))
				str[i] = str[i] - 32;
				printf("firstletter is %c, and value is %d\n", str[i], str[i]);
		}


		i++;
	}
	return (save);
}
