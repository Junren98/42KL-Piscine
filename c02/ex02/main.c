#include <stdio.h>
int	ft_str_is_alpha(char *str);

int	main(void)
{
	char str1[10] = "skdmvnsoe";
	char str2[10] = "zJIoQLKsM";
	char str3[10] = "12ad45asd";
	char str4[10] = "bdff!#amn";
	char str5[10] = "09899/*ab";
	char str6[10] = "  ";
	
	int test1 = ft_str_is_alpha(str1);
	int test2 = ft_str_is_alpha(str2);
	int test3 = ft_str_is_alpha(str3);
	int test4 = ft_str_is_alpha(str4);
	int test5 = ft_str_is_alpha(str5);
	int test6 = ft_str_is_alpha(str6);

	printf("the string of str1 is %s, contains %d\n", str1, test1); 
	printf("the string of str2 is %s, contains %d\n", str2, test2); 
	printf("the string of str3 is %s, contains %d\n", str3, test3); 
	printf("the string of str4 is %s, contains %d\n", str4, test4); 
	printf("the string of str5 is %s, contains %d\n", str5, test5); 
	printf("the string of str6 is %s, contains %d\n", str6, test6); 
}

