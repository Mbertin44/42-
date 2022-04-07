/* Sert a comparer la valeur ascii de x caractere entre deux chaines de caracteres*/

#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int unsigned	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))	/* temps que s1 et s2 ne sont pas égal a '\0' ET que n est égal au nombre de caractere a comparer */
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}                /* Ma fonction ne s'arrete pas au return car ma condition while n'est pas rempli. Temps que le nombre de case n n'est pas vérifié en entier grace a l'index je reste dans ma boucle pour enfin return -1, 0, ou 1 selon si toute les case de mon tableau remplisse les conditions demandé */
	return (0);
}

int	main(void)
{
	char a[] = "111111111";
	char b[] = "222222222";
	char c[] = "333333333";

    printf("a = %s\n", a);
    printf("b = %s\n", b);
    printf("c = %s\n", c);
	
	printf("Je compare a et b : %d\n", ft_strncmp(a, b, 5)); //compare seulement les 5 premiers caracteres
    printf("Je compare b et c : %d\n", ft_strncmp(b, c, 5));
    printf("Je compare c et b : %d\n", ft_strncmp(c, b, 5));
	return (0);
}
