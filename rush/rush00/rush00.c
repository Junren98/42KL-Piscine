void	ft_putchar(char c);

int		g_countW;
int		g_countL;
char	g_text;
char	g_space;
char	g_dash;
char	g_space1;
char	g_vertical;

void	ft_length(int x)
{
	while (g_countL < x)
	{
		if (g_countL % x == 0)
		{
			ft_putchar(g_text);
			g_countL++;
			if (g_countL == x)
			{
				ft_putchar(g_space);
			}
		}
		else if (g_countL % x == x -1)
		{
			ft_putchar(g_text);
			ft_putchar(g_space);
			g_countL++;
		}
		else
		{
			ft_putchar(g_dash);
			g_countL++;
		}
	}
}

void	ft_length_mid(int x)
{
	while (g_countL < x)
	{
		if (g_countL % x == 0)
		{
			ft_putchar(g_vertical);
			g_countL++;
			if (g_countL == x)
			{
				ft_putchar(g_space);
			}
		}
		else if (g_countL % x == x -1)
		{
			ft_putchar(g_vertical);
			ft_putchar(g_space);
			g_countL++;
		}
		else
		{
			ft_putchar(g_space1);
			g_countL++;
		}
	}
}

void	ft_width(int x, int y)
{
	while (g_countW < y)
	{
		if (g_countW % y == 0)
		{
			g_countL = 0;
			ft_length(x);
			g_countW++;
		}
		else if (g_countW % y == y - 1)
		{
			g_countL = 0;
			ft_length(x);
			g_countW++;
		}
		else
		{
			g_countL = 0;
			ft_length_mid(x);
			g_countW++;
		}
	}
}

void	rush(int x, int y)
{
	g_text = 'o';
	g_space = '\n';
	g_dash = '-';
	g_countL = 0;
	g_countW = 0;
	g_space1 = ' ';
	g_vertical = '|';
	ft_width(x, y);
}
