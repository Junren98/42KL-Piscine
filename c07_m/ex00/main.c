#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char	*ft_strdup(char *src);

int	main(void)
{
	char str[10] = "abcdefghi";

	char *target = strdup(str);
	printf("strdup(str) is %s\n", target);
	*str = '\0';
	//char *tryft = ft_strdup(str);
	//printf("ft_strdup(str) is %s\n", tryft);
	return (0);
}
