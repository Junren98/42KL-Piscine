#include <stdio.h>
#include <string.h>
int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	//need to check for enough fo space
	char s1[20] = "ABD";
	char s2[25] = "ABD";
	int	 test;

	
	printf("for strcmp, the src is %s\n", s1);
	printf("for strcmp, the dest is %s\n", s2);
	int a = strcmp(s1, s2);
	//printf("after strcmp, the src is %s\n", s1);
	//printf("after strcmp, the dest is %s\n", s2);
	printf("strcmp, the comparison of length is %d\n", a);
	
	//printf("\nbefore ft_strcmp, the string of str3 is %s\n");
	test = ft_strcmp(s1, s2);
	//printf("after ft_strcmp, the string of str3 is %s\n", str3);
	printf("ft_strcmp, the comparison of length is %d\n", test);

	return (0);
}
