#include<unistd.h>

int	main(int nb_arg, char **arg)
{
	int i;
	int j;

	i = 0;
	j = 0;

	if (nb_arg != 2)
		write(1, "\n", 1);
	else
	{
		while(arg[1][i] != '\0')
			i++;
		i = i - 1;
		while(arg[1][j] != '\0')
		{
			write(1, &arg[1][i - j], 1);
			j++;
		}
		return (0);
	}
}

