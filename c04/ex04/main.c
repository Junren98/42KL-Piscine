#include <limits.h>
#include <stdio.h>
void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	printf("the number 10 in base \n");
	ft_putnbr_base(10, "");
	printf("\nthe number 1234 in base 01 is \n");
	ft_putnbr_base(1234, "01");
	printf("\nthe number 1234 in base poneyvif is \n");
	ft_putnbr_base(1234, "poneyvif");
	printf("\nthe number -5478773672 in base 0123456789 is \n");
	ft_putnbr_base(-5478773672, "0123456789");
	printf("\nthe number INT_MIN in base 0123456789 is \n");
	ft_putnbr_base(INT_MIN, "0123456789");
	printf("\nthe number INT_MAX in base 0123456789ABCDEF is \n ");
	ft_putnbr_base(INT_MAX, "0123456789ABCDEF");
	printf("\nthe number -1234 in base 0123456789ABCDEF is \n");
	ft_putnbr_base(-1234, "0123456789ABCDEF");

	printf("\nthe number 5763 in base oiwo123 is \n");
	ft_putnbr_base(5763, "oiwo123");
	printf("\nthe number 5763 in base 1oiw123 is \n");
	ft_putnbr_base(5763, "1oiw123");
	printf("\nthe number 5763 in base oi+o-23 is \n");
	ft_putnbr_base(5763, "oi+o23");
	printf("\nthe number 5763 in base 1 is \n");
	ft_putnbr_base(5763, "1");



}
