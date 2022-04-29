/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:34:20 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/20 13:39:31 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}
/* 	strchr va prendre le caractere c (qui à était cast en char) et le comparer
	 à la chaine s. Quand 'c' est trouvé au complet dans 's' la fonction va 
	 retourner la chaine de caractere 's' à partir de l'occurence qu'on 
	 lui à demandé de trouver. */ 