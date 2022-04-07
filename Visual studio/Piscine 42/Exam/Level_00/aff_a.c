#include<unistd.h>

int main(int nb_arg, char **arg)
{
	int i;

	i = 0;
	if (nb_arg == 1 || nb_arg > 2)
		write(1, "a\n", 2);
	if (nb_arg == 2)
	{
		while(arg[1][i] != 0)
		{
			if(arg[1][i] == 'a')
			{
				write(1, "a", 1);
				break;;
			}
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
