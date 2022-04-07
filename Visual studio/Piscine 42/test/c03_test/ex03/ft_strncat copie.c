#include<stdio.h>

/* Cette fonction sert a copier des charactere d'une chaine a l'autre avec précision. Par exemple je dis prend les 3 premier caractere de la premiere chaine et colle les à la fin de l'autre chaine */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0; // compteur pour la chaine dest
	j = 0; // compteur pour la chaine src

	while(dest[i] != '\0')
	{
		i++;
	}
	while(src[j] != '\0' && j < nb)
	{
		dest[i] = src[j]; // la case i de la chaine dest = a la case j de la chaine src
		i++;
		j++;
	}
	dest[i] = '\0'; // une fois que la copie est terminé je dis "cette case est la derniere" et donc je sors de ma boucle
	return (dest); // je renvois la valeur de ma fonction
}

int main(void)
{
	char a[] = "Hello";
	char b[] = "World";

	printf("a = %s, b = %s\n", a, b);
	printf("J'ajoute les 3 premiers caracteres de b à la fin de a.\n");
	printf("Donc : %s\n", ft_strncat(a, b, 3));
	return (0);
}
