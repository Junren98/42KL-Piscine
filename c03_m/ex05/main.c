#include <stdio.h>
#include <string.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	//need to check for enough fo space
	char dest[25] = "123456";
	char dest2[25] = "12345";
	char src[20] = "12345";
	unsigned int	count_s = 2;
	unsigned int	str;
	
	printf("before strlcat, the dest is %s\n", dest);
	printf("before strlcat, the src is %s\n", src);
	str = strlcat(dest, src, count_s);
	printf("after strlcat, the dest is %s\n", dest);
	printf("after strlcat, the src is %s\n", src);
	printf("strlcat, the return  is %d\n", str);
	
	printf("\nbefore ft_strlcat, the dest is %s\n", dest2);
	unsigned int test = ft_strlcat(dest2, src, count_s);
	printf("after ft_strlcat, the string of dest is %s\n", dest2);
	printf("ft_strlcat, the comparison of length is %d\n", test);

	return (0);
}
