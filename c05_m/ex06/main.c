#include <stdio.h>
int ft_is_prime(int nb);

int	main(void)
{
	int nb = 2147483647;
	int i = ft_is_prime(nb);

	printf("the number %d is  %d\n", nb, i);
	return(0);
}
