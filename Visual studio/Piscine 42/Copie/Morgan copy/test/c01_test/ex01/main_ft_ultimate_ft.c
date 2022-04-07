#include <stdio.h>

void 	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main()
{
	int temp0;
	int *temp1;
	int *temp2;
	int *temp3;
	int *temp4;
	int *temp5;
	int *temp6;
	int *temp7;
	int *temp8;
	int *temp9;

	temp0 = 0;
	temp1 = &temp0;
	temp2 = &temp1;
	temp3 = &temp2;
	temp4 = &temp3;
	temp5 = &temp4;
	temp6 = &temp5;
	temp7 = &temp6;
	temp8 = &temp7;
	temp9 = &temp8;

	printf("avant nbr = %d\n", temp0);
	ft_ultimate_ft(temp9);
	printf("apres nbr = %d\n", temp0);
	return 0;
}
