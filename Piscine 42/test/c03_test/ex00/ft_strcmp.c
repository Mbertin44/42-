/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:03:19 by mbertin           #+#    #+#             */
/*   Updated: 2022/03/08 12:13:57 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Utile pour comparer des mots de passe */

#include<stdio.h>
#include<string.h>

int	ft_strcmp(char *s1, char *s2) /* On compare s1 à s2 pour savoir si s1 à une plus grosse valeur ascii */
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0') /* temps que s1 OU s2 n'est pas terminé continué la boucle */
	{
		if (s1[i] < s2[i]) /* Si la somme de chaque case de la chaine s1 vaut moins que s2 renvoyer -1 */
		{
			return (-1);
		}
		if (s1[i] > s2[i])
		{	
			return (1);
		}
		i++;
	}
	return (0); // si s1 et s2 on la même valeur renvoyer 0
}

int	main(void)
{
	char a[] = "coucou";
	char b[] = "coucou coucou";
	char c[] = "0123456789";

    printf("%d\n", strcmp(a, b));
    printf("%d\n", strcmp(b, a));
    printf("%d\n", strcmp(b, a));
    
	printf("%d\n", ft_strcmp(a, b));
	printf("%d\n", ft_strcmp(b, a));
    printf("%d\n", ft_strcmp(b, a));
	return (0);
}
