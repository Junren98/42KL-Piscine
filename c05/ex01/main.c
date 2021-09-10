#include <stdio.h>
int	ft_recursive_factorial(int nb);

int	main(void)
{
	int i = 10;
	int total = ft_recursive_factorial(i);
	printf("the number of facotorial of %d, total is %d\n", i, total);
}
