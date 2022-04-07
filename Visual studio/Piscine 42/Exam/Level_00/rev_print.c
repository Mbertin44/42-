#include<unistd.h>

int	main(int nb_arg, char **arg)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if(nb_arg == 1 || nb_arg > 2)
	{
		write(1, "\n", 1);
	}
	if(nb_arg == 2)
	{
		while(arg[1][i] != '\0')
		{
			i++;
		}
		while(arg[1][j] != '\0')
		{
			write(1, &arg[1][(i - 1) - j], 1);
			j++;
		}
		write(1, "\n", 1);
	}
	return (0);
}


