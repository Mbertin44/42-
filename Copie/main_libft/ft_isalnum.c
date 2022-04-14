#include<stdio.h>

int ft_isalnum(int c)
{
    if((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z' ))
    return (1);
    return (0);
}

int main(void)
{
    printf("%d\n", ft_isalnum('a'));
    printf("%d\n", ft_isalnum('1'));
    printf("%d\n", ft_isalnum('A'));
    printf("%d\n", ft_isalnum('%'));
    return (0);
}