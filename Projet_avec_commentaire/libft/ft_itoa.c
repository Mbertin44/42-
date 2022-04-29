/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:41:24 by marvin            #+#    #+#             */
/*   Updated: 2022/04/21 15:10:51 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/* 	itoa alloue avec calloc et retourne une chaîne de caractères représentant 
	l’entier ’n’ reçu en argument. 
	
	 Dans un premier temps je créé une fonction intlen qui renvoie la longueur 
	 de mon nbr. J'ai besoin de connaitre la longueur de mon nombre pour pouvoir
	 alloué suffisament d'espace avec mon calloc pour contenir mon char
	 
	 Ensuite dans ma fonction itoa je déclare un pointeur char 'temp' pour contenir
	 le chaine de caractere que je vais retourner, une variable 'i' qui va contenir 
	 la longueur de n, et une variable sign pour gérer si le nombre est positif
	 ou négatif (initialisé à 0  puis passe à 1 si n est néfatif. Si sign = 1 
	 alors temp[0] = '-') 
	 
	 Je sécurise ma fonction au cas ou temp serait vide avec un return (NULL).

	 Pour le calcul je décide de commencer par la fin car j'utilise modulo à mon avantage. 
	Je n'ai pas d'outils équivalent si jamais j'avais commencé du début.
	Il y aurait surement la possibilité de faire une multiplication à coup de 
	0,xxx01 mais ça serait rempli de rempli de condition

	donc temp[i] est égal à nbr modulo 10, puis nbr = nbr divisé par 10 et ainsi de suite 
	jusqu'à ce que nbr modulo 10 soit égal à 0,xxx */
int	ft_intlen(int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		i++;
	while (nbr != 0)
	{
		i++;
		nbr /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*temp;
	int		i;
	int		sign;

	sign = 0;
	i = ft_intlen(n) - 1;
	temp = ft_calloc(i + 1, sizeof(char)); // +1 car il faut '\0' à la fin
	if (!temp)
		return (NULL);
	if (n == -2147483648)
		return (ft_memcpy(temp, "-2147483648", 11));
	if (n < 0)
	{
		sign = 1;
		n *= -1; // Je passe mon négatif en positif car le '-' prend un espace en plus dans mon tableau
	}
	while (i >= 0)
	{
		temp[i] = n % 10 + '0'; // + '0' pour qu'il comprenne qu'on parle pas de ascii
		n /= 10;
		if (i == 0 && sign == 1)
			temp[i] = '-';
		i--;
	}
	return (temp);
}
int	main()
{
	printf("%s\n", ft_itoa(-1234));
	return (0);
}