/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:38:44 by mbertin           #+#    #+#             */
/*   Updated: 2022/03/08 15:45:39 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

/* La fonction sert à ajouter une chaine de caractere à la fin d'une autre chaine de caractere */

char	*ft_strcat(char *dest, char *src)
{
	int	i; /*je créé deux compteurs. un premier pour connaitre la longueur de la chaine dest et arriver à la fin */
	int	j; // et un deuxieme pour récuperer les caracteres présent dans la case j dans ma chaine src

	i = 0;
	j = 0;
	while (dest[i] != '\0')/* Je suis obligé d'arriver a la fin de ma destination dans un premier temps pour connaitre sa longueur et la stocker dans i */
		i++;
	while (src[j] != '\0')
		dest[i++] = src[j++];// Je suis donc a la fin de la chaine dest, et j'ajoute les caracteres de src à la suite.
	dest[i] = '\0';
	return (dest);
} 

int	main(void)
{
	char a[] = "Hello";
	char b[] = "World";
	char c[] = "ou pas";

	printf("%s\n", ft_strcat(a, b));
	return (0);
}
