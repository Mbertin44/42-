#include<unistd.h>
#include<stdio.h>

int ft_atoi(char *str);

int	main(void)
{
	char a[] = " --+--1234";

	printf("%d", ft_atoi(a));
	return (0);
}
