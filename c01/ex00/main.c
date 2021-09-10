#include <stdio.h>

void    ft_ft(int *nbr);

int	main(void)
{
	int nbr;
	int a;
	
	ft_ft(&nbr);
	a = nbr;
	printf("the address of nbr in main is  and value is %d\n", nbr);
	printf("the address of nbr in main is and value is %d\n", a);

/* 	int *p1;
	int **p2;
	int **p3;

	p1 = &nbr;
	p2 = &p1;
	p3 = p2;

	
	printf("the address of p in main is %p and value is %d\n", p1, *p1);
	printf("the address of p in main is %p and value is %d\n", p2, **p2);
	printf("the address of p in main is %p and value is %d\n", p3, **p3);
*/
}
