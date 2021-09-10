#include <stdio.h>
#include <string.h>
char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	//need to check for enough fo space
	char src[5] = "this";
	char dest[25] = "asasdasdasd";
	char str3[20];

	
	printf("before, the src is %s\n", src);
	printf("before, the dest is %s\n", dest);
	char *test = strncpy(dest, src, 10);
	printf("after, the src is %s\n", src);
	printf("after, the dest is %s\n", dest);
	printf("after, the return value is %s\n", test);
	
	printf("before ft_strncpy, the string of str3 is %s\n", str3);
	char *ft_test = ft_strncpy(str3, src, 10);
	printf("after ft_strncpy, the string of str3 is %s\n", str3);
	printf("after, the return value is %s\n", ft_test);
}
