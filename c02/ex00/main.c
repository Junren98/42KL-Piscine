#include <stdio.h>
#include <string.h>
char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	//need to check for enough fo space
	char src[20] = "this four stem nice";
	char dest[25] = "asdadasddf";
	char str3[20];

	
	printf("before, the src is %s\n", src);
	printf("before, the dest is %s\n", dest);
	strcpy(dest, src);
	printf("after, the src is %s\n", src);
	printf("after, the dest is %s\n", dest);
	
	printf("before ft_strncpy, the string of str3 is %s\n", str3);
	ft_strcpy(str3, src);
	printf("after ft_strncpy, the string of str3 is %s\n", str3);
}