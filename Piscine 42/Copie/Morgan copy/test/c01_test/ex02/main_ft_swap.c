#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;
	temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a;
	int b;

	a = 0;
	b = 42;

	printf("Avant a = %d %d\n", a, b);
	ft_swap(&a, &b);
	printf("Apres b = %d %d\n", a, b);
	return 0;
}	
