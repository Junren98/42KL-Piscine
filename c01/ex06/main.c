#include <stdio.h>
int	ft_strlen(char *str);

int	main(void)
{
	char string[10] = "abcde";
	int count;

	count = ft_strlen(string);	
	printf("the number of character in the string is %d", count);
	return(0);

}
