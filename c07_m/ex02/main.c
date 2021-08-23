#include <stdio.h>
#include <unistd.h>
int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int min = -2;
	int max = -2;
	int len = max - min;
	int *range;
	//printf("before function, the content of range is  %p\n", range);
	//printf("before function, the content of &range is  %p\n", &range);
	int size  = ft_ultimate_range(&range, min, max);

	printf("the min is %d and max is %d\n", min, max);
	//printf("the range[1] %d\n", range[3]);
	//printf("the min is %d and max is %d\n", min, max);
	for (int i = 0; i < len; i++)
	{
		printf("the range of min and max integer is %d\n", range[i]);
	}
	printf("the return is %d\n", size);
	//printf("the content of range is  %p\n", range);
	//printf("the content of &range is  %p\n", &range);

		
	return (0);
}
