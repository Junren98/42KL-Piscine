#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int b;
	int div;
	int mod;

	a = 105;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf("a is %d, b is %d, c is %d, d is %d", a, b, div, mod);
	return(0);
}
