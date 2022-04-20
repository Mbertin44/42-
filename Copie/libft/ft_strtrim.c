/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:41:42 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/20 13:51:25 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/* 	strtrim va chercher la chaine de caractere set dans la chaine src et retourne 
	une copie de la chaine src sans les caracères spécifiés dans set au début et
	 à la fin de la chaine de caracteres */
	 
char	*ft_strtrim(char const *src, char const *set)
{
	int	end;

	if (!src || !set)
		return (NULL);
	while (*src && ft_strchr(set, *src)) /* OUI CA L'AIR INVERSÉ. Je ne cherche pas
											set dans src mais je cherche src 
											dans set. C'est à dire que je prend 
											un caractere après l'autre de src. 
											ft_strchr s'occupe de transormer 
											le int en char ( c'est pour ca 
											que je donne la valeur à l'adresse de
											src avec *).ATTENTION : JE N'UTILISE PAS
											 LA VALEUR DE RETOUR. PS : strchr cherche
											 un caractere à la fois de src c'est pour ça
											 que la fonction est dans un while. */
		src++;
	end = ft_strlen(src);
	while (end && ft_strchr(set, src[end]))
	{
		end--;
	}
	return (ft_substr(src, 0, end + 1));
}
