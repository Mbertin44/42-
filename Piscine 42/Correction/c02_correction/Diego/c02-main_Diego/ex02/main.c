/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:22:16 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/02 12:33:26 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int    ft_str_is_alpha(char *str)
{
    int    index;

    if (str[0] == '\0')
    {
        return (1);
    }
    else
    {
        index = 0;
        while (str[index] != '\0')
        {
            if (!(str[index] >= 'a' && str[index] <= 'z')) // j'aurais pu écrire || mais la fonction est trop longue donc j'utilise if en passant à la ligne
                if (!(str[index] >= 'A' && str[index] <= 'Z')) /* si la case i de la chaine str est supérieur ou égal à la valeur ascii de A ET inférieur ou égal à la valeur ascii de Z ET que i n'est pas égal à '\0' ( pareil au dessus mais pour les minuscule de a et z ) */
                    return (0);
            index++;
        }
        return (1); // sinon renvoyer 1 si ca ne rentre pas dans les conditions ( ca signifie qu'il s'agit d'un caractère spécial )
    }
}

// !tableau[case] signifie que la case du tableau n'Est pas égal a '\0'


int	main(void)
{
	char a[] = "1234567890abcvdgf";
	char b[] = "EWQQDaaaajdgs";
	char c[] = "";

	printf("String a: %s\n", a);
	printf("String b: %s\n", b);
	printf("String c: %s\n", c);

	printf("\nResult a: %d\n", ft_str_is_alpha(a));
	printf("\nResult b: %d\n", ft_str_is_alpha(b));
	printf("\nResult a: %d\n", ft_str_is_alpha(c));
}
