#include <stdio.h>
#include <string.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	//need to check for enough fo space
	char src[25] = "this four eaaa";
	char dest[25] = "asdadasddf";
	char str3[20];

	
	printf("before, the src is %s\n", src);
	printf("before, the dest is %s\n", dest);
	unsigned int j = strlcpy(dest, src, 4);
	printf("after, the src is %s\n", src);
	printf("after, the dest is %s\n", dest);
	printf("after ft_strncpy, the string of str3 is %s\n", str3);
	printf("the return from strlcpy is %d\n", j);
	
	printf("before ft_strncpy, the string of str3 is %s\n", str3);
	unsigned int i = ft_strlcpy(str3, src, 4);
	printf("after ft_strncpy, the string of str3 is %s\n", str3);
	printf("the return from ft_strlcpy is %d\n", i);
}
