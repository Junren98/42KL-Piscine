void	ft_putchar(char c);

char	text;
char	dash;
char	vertical;
char	space;
char	space1;
int		countL;
int		countW;

void	rush(int x, int y)
{
	text = 'o';
	dash = '-';
	vertical = '|';
	space = '\n';
	space1 = ' ';
	countL = 0;
	countW = 0;
	while (countW < y)
	{
		if (countW % y == 0)
		{
			countL = 0;
			while (countL < x)
			{
				if (countL % x == 0)
				{
					ft_putchar(text);
					countL++;
					if (countL == x)
					{
						ft_putchar(space);
					}
				}
				else if (countL % x == x - 1)
				{
					ft_putchar(text);
					ft_putchar(space);
					countL++;
				}
				else
				{
					ft_putchar(dash);
					countL++;
				}
			}
			countW++;
		}
		else if (countW % y == y - 1)
		{
			countL = 0;
			while (countL < x)
			{
				if (countL % x == 0)
				{
					ft_putchar(text);
					countL++;
					if (countL == x)
					{
						ft_putchar(space);
					}
				}
				else if (countL % x == x - 1)
				{
					ft_putchar(text);
					ft_putchar(space);
					countL++;
				}
				else
				{
					ft_putchar(dash);
					countL++;
				}
			}
			countW++;
		}
		else
		{
			countL = 0;
			while (countL < x)
			{
				if (countL % x == 0)
				{
					ft_putchar(vertical);
					countL++;
					if (countL == x)
					{
						ft_putchar(space);
					}
				}
				else if (countL % x == x - 1)
				{
					ft_putchar(vertical);
					ft_putchar(space);
					countL++;
				}
				else
				{
					ft_putchar(space1);
					countL++;
				}
			}
			countW++;
		}
	}
}
