#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	start;
	long	end;
	long	mid;

	if (nb <= 0)
		return (0);
	start = 0;
	end = (long) nb;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == (long) nb)
			return (mid);
		if (mid * mid < (long) nb)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (mid);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	range;

	i = 2;
	range = ft_sqrt(nb);
	if (nb <= 1)
		return (0);
	while (i <= range)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
