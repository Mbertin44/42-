#include<stdio.h>

int ft_isdigit(int c)
{
	if (c >= '0' && c <= '9') 
    return (1);
    return (0);
    
}

int main(void)
{
    printf("%d\n", ft_isdigit('a'));
    printf("%d\n", ft_isdigit('1'));
    return (0);
}