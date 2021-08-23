#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(int argc, char **argv)
{
	while ((*(*argv)++) != '\0')
		ft_putchar(**argv);
	ft_putchar('\n');
	return (0);
}
