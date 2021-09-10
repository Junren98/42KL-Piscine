#include <stdio.h>
void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int a;
	int *nbr1;
	int **nbr2;
	int ***nbr3;
	int ****nbr4;
	int *****nbr5;
	int ******nbr6;
	int *******nbr7;
	int ********nbr8;

	nbr1 = &a;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;

	ft_ultimate_ft(&nbr8);

	//print
	printf("the value of nbr is %d and address is %p\n", ********nbr8, nbr8);
//	printf("the value of a is %d and address is %p\n", a, a);
}
