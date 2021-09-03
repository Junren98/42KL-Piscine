#include <stdio.h>
void	ft_putstr(char *str);

int main(void)
{
	char str2[11] = "Th123ads";
	char *ptr = str2;
	ft_putstr(ptr);	
	


	//printf("the main str address and content is %p and %c\n", str, str[0]);
	//printf("the ptr address and content is %p and %c\n", ptr, *(ptr+1));
	//to check sizeof()
	//printf("the sizeof str is %lu\n", sizeof(str));
	//printf("the size of str[] is %lu\n", sizeof(str[0]));	
	//printf("the sizeof p is %lu\n", sizeof(r));

	return(0);
}
