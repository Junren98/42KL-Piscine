#include <stdio.h>
char	*ft_strupcase(char *str);

int	main(void)
{
	char str1[10] = "SKdmvnsoe";
	char str2[10] = "ZJIAOSIQM";
	char str3[10] = "12ad45asd";
	char str4[10] = "bdff!#amn";
	char str5[10] = "098993242";
	char str6[10] = {1, 10, 31, 122};
	
	char *test_str1;
	char *test_str2;
	char *test_str3;
	char *test_str4;
	char *test_str5;
	char *test_str6;

	printf("the string of str1 is %s \n", str1); 
	printf("the string of str2 is %s \n", str2); 
	printf("the string of str3 is %s \n", str3); 
	printf("the string of str4 is %s \n", str4); 
	printf("the string of str5 is %s \n", str5); 
	printf("the string of str6 is %s \n", str6);
	test_str1 = ft_strupcase(str1);
	test_str2 = ft_strupcase(str2);
	test_str3 = ft_strupcase(str3);
	test_str4 = ft_strupcase(str4);
	test_str5 = ft_strupcase(str5);
	test_str6 = ft_strupcase(str6);
	printf("the string of str1 is %s \n", test_str1); 
	printf("the string of str2 is %s \n", test_str2); 
	printf("the string of str3 is %s \n", test_str3); 
	printf("the string of str4 is %s \n", test_str4); 
	printf("the string of str5 is %s \n", test_str5); 
	printf("the string of str6 is %s \n", test_str6);
}

