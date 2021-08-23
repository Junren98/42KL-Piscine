#include <stdio.h>
#include <string.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	//need to check for enough fo space
	char	dest[20] = "ABDa";
	char	src[25] = "ABD";
	//int	 test;

	
	printf("for strncat, the dest is %s\n", dest);
	printf("for strncat, the src is %s\n", src);
	char *a = strncat(dest, src, 3);
	printf("after strncat, the src is %s\n", dest);
	printf("after strncat, the dest is %s\n", src);
	printf("strncat, the a is %s\n", a);
	
	printf("\nbefore ft_strncat, the string of dest is %s\n", dest);
	char *b = ft_strncat(dest, src, 3);
	printf("after ft_strncat, the string of dest is %s\n", dest);
	printf("ft_strncat, the return is %s\n", b);

	return (0);
}
