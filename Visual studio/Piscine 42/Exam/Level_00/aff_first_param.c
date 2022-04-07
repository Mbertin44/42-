#include<unistd.h>

int	main(int nb_arg, char **arg)
{
	int i;

	i = 0;
	if(nb_arg == 1)
		write(1, "\n", 1);
	if(nb_arg >= 2)
	{
		while(arg[1][i] != '\0')
		{
			write(1, &arg[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}


