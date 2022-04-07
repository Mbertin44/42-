#include <stdio.h>

void change_nombre(int *nb)
{
	*nb = 15;
}

int main ()
{
	int nombre = 0;

	printf("Avant nombre = %d\n", nombre);
	change_nombre(&nombre);
	printf("Apres nombre = %d\n", nombre);

	return 0;
}

