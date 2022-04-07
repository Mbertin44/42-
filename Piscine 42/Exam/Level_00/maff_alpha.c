#include<unistd.h>

int	main(void)
{
	int i;
	int j;

	i = 'a';
	j = 'B';
	while(j < 91)
	{
		write(1, &i, 1);
		write(1, &j, 1);
		i = i + 2;
		j = j + 2;
	}
	return (0);
}

