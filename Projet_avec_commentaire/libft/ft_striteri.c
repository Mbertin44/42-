/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 14:28:12 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/22 11:22:10 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*	striteri prend en parametre un chaine de caractere s et une fonction f.
	La fonction f peut plus ou moins faire ce que je veux dans ce cas si. 
	Par exemple je peux décider de modifier un caractere, copier un caractere,
	passer les caracteres en majuscule etc...
	C'est dans la fonction striteri que je vais donner les parametres à ma 
	fonction f */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		f(i, s + i); /*	s'écrit aussi f(i, &s[i]); Je dois mettre & devant
						s[i] car le char donné en parametre 
						est un pointeur */
		i++;
	}
}

/*	C'est à ce moment la que je décide ce que fait ma fonction f */

void	f(unsigned int n, char *c)
{
	c[n] = '0';
	printf("%s\n", c);
}

/* 	J'appel ma fonction ft_striteri dans mon main et ma fonction f
	est appelé dans la fonction striteri */

int	main(int argc, char const *argv[])
{
	char	c[10] = "coucou";

	ft_striteri(c, &f);
	return (0);
}
