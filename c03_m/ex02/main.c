#include <stdio.h>
#include <string.h>
char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	//need to check for enough fo space
	char dest[20] = "ABD";
	char src[4] = "ABD";
	//int	 test;
	char *str;
	
	printf("before strcat, the dest is %s\n", dest);
	printf("before strcat, the src is %s\n", src);
	str = strcat(dest, src);
	printf("after strcat, the dest is %s\n", dest);
	printf("after strcat, the src is %s\n", src);
	printf("strcat, the return  is %s\n", str);
	
	printf("\nbefore ft_strcat, the dest is %s\n", dest);
	char *test = ft_strcat(dest, src);
	printf("after ft_strcat, the string of dest is %s\n", dest);
	//printf("ft_strcat, the comparison of length is %s\n", test);

	return (0);
}
