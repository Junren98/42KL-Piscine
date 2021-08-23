#include <stdio.h>
int	ft_recursive_power(int nb, int power);

int main(void)
{
	int nb = 5;
	int pow = 10;

	int	i = ft_recursive_power(nb, pow);
	printf("the number is %d, power %d\n", nb, pow);
	printf("the ans is %d\n", i);
}
