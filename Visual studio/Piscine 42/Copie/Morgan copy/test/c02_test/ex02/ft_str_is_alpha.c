#include<stdio.h>
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	index;

	if (str[0] == '\0')
	{
		return (1); // renvois 1 si ma chaine est vide
	}
	else
	{
		index = 0;
		while (str[index] != '\0')
		{
			if (!(str[index] >= 'a' && str[index] <= 'z')) // j'aurai pu écrire || pour dire "ou" mais la fonction est trop longue donc j'utilise if en passant à la ligne
				if (!(str[index] >= 'A' && str[index] <= 'Z')) /* si la case i de la chaine str est supérieur ou égal à la valeur ascii de A ET inférieur ou égal 
																  à la valeur ascii de Z ET que i n'est pas égal à '\0' ( pareil au dessus mais pour les minuscule de a et z ) */
			//index++;
			return (0);
			index++;
		}
		return (1); // sinon renvoyer 1 si ca ne rentre pas dans les conditions ( ca signifie qu'il s'agit d'un caractère standart )
	}
}

// !tableau[case] signifie que la case du tableau n'Est pas égal a '\0'

int	main(void)
{
	printf("%d", ft_str_is_alpha("1")); /*J'utilise %d car je demande le retour de la fonction et non pas du pointeur str. Sinon j'aurais du déclarer ma chaine 
											  ET utiliser %s pour récuperer l'informaiton du pointeur */
	return 0;
}

/* Si la valeur donné a ft_str_is_alpha est : - une lettre, je renvois 1
 											  - vide, je renvois 1
											  - un caractère spécial, je renvois 0
