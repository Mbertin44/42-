#include <stdio.h>
#include <unistd.h>

/* la fonction ft_strncpy sert à copier le contenu d'une chaine à une autre avec plus de précision. Dans ce cas la on lui dit de copier les 5 premiers caract de src à la place des 5 premiers caract de dest */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	index;

	index = 0;
	while (src[index] != '\0' && index < n) // temps que index n'est pas dans la derniere case et que index est inferieur au nombre de caractere que je veux copier
	{
		dest[index] = src[index]; //je copie le contenu de la case i dans src et je le colle dans la case i de dest
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0'; // arrivé à la derniere case selectionné de src ( 5 ) je dis que ma 6eme case = "\0" pour terminer ma chaine de caractere
		index++;
	}
	return (dest); // je retourne la valeur de dest 
}

void    ft_putstr(char *str)
{
    int    index;

    index = 0;
    while (str[index] != '\0')
    {
        write(1, &str[index], 1);
        index++;
    }
}

int    main(void)
{
    char dest[55] = "0123456789";
    char src[55] = "coucou";


    printf("dest: %s\n src: %s \n", dest, src);
    ft_strncpy(dest, src, 5);
    printf("dest: %s\n src: %s \n", dest, src);

    return 0;
}

