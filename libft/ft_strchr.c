/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:34:20 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/20 11:01:55 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	c = (char)c;
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return ((char *)s + i);
	return (NULL);
}

/* 	strchr va prendre le caractere c (qui à était cast en char) et le comparer
	 à la chaine s. Quand 'c' est trouvé au complet dans 's' la fonction va 
	 retourner la chaine de caractere 's' à partir de l'occurence qu'on 
	 lui à demandé de trouver. */ 