#include <stdio.h>


void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int nbr;
	nbr = 0;

	printf("avant nbr = %d\n", nbr);
	ft_ft(&nbr);
	printf("apres nbr = %d\n", nbr);
	return 0;
}
