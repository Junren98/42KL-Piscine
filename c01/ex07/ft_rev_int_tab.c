void	ft_rev_int_tab(int *tab, int size)
{
	int	i_start;
	int	temp;
	int	i_end;

	i_start = 0;
	i_end = size;
	while (i_start < i_end)
	{
		temp = tab[i_start];
		tab[i_start] = tab[i_end - 1];
		tab[i_end - 1] = temp;
		i_start++;
		i_end--;
	}
}	
