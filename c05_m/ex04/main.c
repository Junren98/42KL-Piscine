#include <stdio.h>
int ft_fibonacci(int index);

int	main(void)
{
	int i = 100;
	int fib = ft_fibonacci(i);
	printf("the fibonacci of %d is %d", i, fib); 
}
