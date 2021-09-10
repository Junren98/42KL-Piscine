#include "ft_strs_to_tab.c"
#include "ft_show_tab.c"
#include <stdio.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
//void				ft_show_tab(struct s_stock_str *par);

int					main(void)
{
	char	*strs[4];
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	int		size;
	struct s_stock_str *ptr;
	int i =0;

	str1 = "Bonjour";
	str2 = "les";
	str3 = "chacaux";
	str4 = "!";
	size = 4;
	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	strs[3] = str4;
	ptr = ft_strs_to_tab(size, strs);
	printf("testing\n");
	printf("the time is %d", i++);

	ft_show_tab(ptr);
}
