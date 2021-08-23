#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int *a = NULL;
	int *b = NULL;
	int num1 = 205;
	int num2 = 10;

	a = &num1;
	b = &num2;
	printf("before the value of a is %d and b is %d\n", *a, *b);
	ft_ultimate_div_mod(a, b);
	printf("after function the value of a is %d and b is %d\n", *a, *b);
	return(0);
}
