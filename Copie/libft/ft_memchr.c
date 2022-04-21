/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:13:17 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/21 12:56:32 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*	La fonction memchr() examine les n premiers octets de la zone mémoire pointée
	 par s à la recherche du caractère c. Le premier octet correspondant à c 
	 (interprété comme un unsigned char) arrête l'opération. 
	 
	La fonction memchr() renvoie un pointeur sur l'octet correspondant, ou NULL 
	si le caractère n'est pas présent dans la zone de mémoire concernée. 
	
	je dois cast s en char pour pouvoir le retourner */

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
