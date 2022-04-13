/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:23:32 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/13 14:00:22 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*	Applique la fonction ’f’ à chaque caractère de la chaîne de caractères "s" 
	passée en argument pour créer une nouvelle chaîne de caractères "temp"
	(avec malloc(3)) résultant des applications successives de ’f’.*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*temp;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	temp = ft_strdup((char *)s);
	if (!temp)
		return (NULL);
	while (temp[i]) // applications successives de 'f'
	{
		temp[i] = f(i, temp[i]); /* selon la fonction pointé par f, "i" n'aura
									pas forcément 'interet mais je suis quand 
									même obligé de le donner en parametre pour 
									que ca compile */  
		i++;
	}
	return (temp);
}
