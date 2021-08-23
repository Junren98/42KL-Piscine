#include <stdio.h>
int ft_find_next_prime(int nb);

int	main(void)
{
	int nb = 2147483630;
	int i = ft_find_next_prime(nb);

	printf("the next prime number of %d is  %d\n", nb, i);
	return(0);
}
