#include <stdio.h>
int ft_atoi(char *str);

int	main(int argc, char **argv)
{
	int num = 0;
	if (argc == 2)
		num = ft_atoi(*(argv+1));
	printf("the number is %d", num);

}
