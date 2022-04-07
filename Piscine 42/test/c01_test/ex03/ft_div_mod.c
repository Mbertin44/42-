#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a;
	int b;
	int resultat_division;
	int resultat_modulo;

	a = 10;
	b = 5;
	
	ft_div_mod(a, b, &resultat_division, &resultat_modulo);
	printf("%d divisé par %d = %d\n", a, b, resultat_division);
	printf("%d modulo par %d = %d\n", a, b, resultat_modulo);
	return 0;
}	
