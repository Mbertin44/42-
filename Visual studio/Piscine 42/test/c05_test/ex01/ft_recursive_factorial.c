#include<unistd.h>
#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	int res;
	
	res = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	if (nb == 1)
	{
		return (1);
	}
	return (ft_recursive_factorial(nb - 1) * nb);
}
int    main(void)
{
    int    nb;

    nb = 5;
    printf("%d\n", ft_recursive_factorial(nb));
    return (0);
}
