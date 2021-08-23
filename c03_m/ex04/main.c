#include <stdio.h>
#include <string.h>
char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	//need to check for enough fo space
	char str[20] = "1234612345111";
	char to_find[25] = "12347:";
	//int	 test;
	char *result;
	
	printf("before strstr, the dest is %s\n", str);
	printf("before strstr, the src is %s\n", to_find);
	result = strstr(str, to_find);
	printf("after strstr, the dest is %s\n", str);
	printf("after strstr, the src is %s\n", to_find);
	printf("strstr, the return  is %s\n", result);
	
	printf("\nbefore ft_strstr, the dest is %s\n", str);
	char *test = ft_strstr(str, to_find);
	printf("after ft_strstr, the string of dest is %s\n", str);
	printf("ft_strstr, the comparison of length is %s\n", test);

	return (0);
}
