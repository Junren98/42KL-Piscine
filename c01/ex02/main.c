#include <stdio.h>
void	ft_swap(int *a, int *b);

int	main(void)
{
	int a;
	int b;
	
	a = 20;
	b = 2;
	printf("the value of a is %d\n", a);
	printf("the value of b is %d\n", b);
	ft_swap(&a, &b);
	printf("after swap, the value of a is %d\n", a);
	printf("after swap, the value of b is %d\n", b);
}
