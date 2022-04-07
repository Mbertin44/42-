#include<unistd.h>
#include <stdio.h>

int	main(int nb_parm, char **parm)
{
	int i;
	i = 0;
	
	if(nb_parm > 2 || nb_parm  == 1)
	{
		write(1, "a\n", 2);
	}
	if(nb_parm == 2)
	{
		while(parm[1][i] != '\0')
		{
			if(parm[1][i] == 'a')
			{
				write(1, "a\n", 2);
				break;
			}
			i++;
		}
		if (parm[1][i] != 'a')
		{
			write(1, "\n", 1);
		}
	}

	return (0);
}
