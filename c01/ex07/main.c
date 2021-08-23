#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int tab[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = sizeof(tab) / sizeof(int);
	
	printf("the sizeof tab is %d", size);

	ft_rev_int_tab(tab, size);

	for (int i = 0; i < size; i++)
	{
		printf("%d", tab[i]);
	}
}
