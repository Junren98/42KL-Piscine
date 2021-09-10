#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, sizeof(c));
}

void	ft_print_alphabet(void)
{
	char	word;

	word = 'a';
	while (word <= 'z')
	{
		ft_putchar(word);
		word++;
	}
}
