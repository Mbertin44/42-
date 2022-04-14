/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:23:32 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/13 16:09:48 by mbertin          ###   ########.fr       */
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
		temp[i] = f(i, temp[i]); /* si i = 0 et temp[i] = c (temp = "coucou")
									alors j'écris 0 + temp[i] donc toujours c. 
									Par contre au moment de l'incrémentation i = 1.
									*/
		i++;
	}
	return (temp);
}
