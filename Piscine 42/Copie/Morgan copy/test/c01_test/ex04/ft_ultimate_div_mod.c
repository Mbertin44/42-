#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int main()
{
	int a;
	int b;

	a = 10;
	b = 5;
	printf("%d divisé par %d", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf(" = %d\n", a);
	a = 10;
	b = 5;
	printf("%d modulo par %d", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf(" = %d\n", b);
	return 0;
}
