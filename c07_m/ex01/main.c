#include <stdio.h>
#include <unistd.h>
int	*ft_range(int min, int max);

int	main(void)
{
	int min = -2;
	int max = 2;
	int i = 0;
	int *range  = ft_range(min, max);
	int len = max - min;
	printf("the array between %d and %d, is \n", min, max);
	if (range == '\0')
		printf("is NULL\n");
	else
	{
		while (i < len)
		{
			printf("%d ", range[i]);
			i++;
		}
	}
		
	return (0);
}
