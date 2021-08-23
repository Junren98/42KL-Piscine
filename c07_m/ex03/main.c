#include <stdio.h>
char *ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
	char *str[] = {"42Kl", "is", "located", "at", "Sunway"};
	char *sep = "-";
	char *res;
	int  i;
	int size = 0;

	res = ft_strjoin(size, str, sep);
	printf("the given string is: ");
	for (i = 0; i < 5; i++)
		printf("%s ", str[i]);
	printf("\nthe size is %d\n", size);
	printf("the separator is %s\n", sep);
	printf("the result is %s" , res);

}
