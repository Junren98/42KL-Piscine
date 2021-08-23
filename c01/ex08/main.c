#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int tab[9] = {100, 23, 43, 74, 25, 6, 57, 98, 19};
	int size = sizeof(tab) / sizeof(int);
	
	//printf("the sizeof tab is %d", size);

	ft_sort_int_tab(tab, size);

	for (int i = 0; i < size; i++)
	{
		printf("%d, ", tab[i]);
	}
}
