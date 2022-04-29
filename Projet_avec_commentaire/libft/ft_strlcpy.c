/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 09:20:08 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/20 13:49:52 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*	strlcpy va copier le nombre de caractere défini dans dstsize, de src vers 
	dst, rajouter un NULL à la fin de dst qui correspond au dernier caractere
	précisé par dstsize, et retourner le nombre de caractere que contient src. 
	Si dst_size n'est pas supérieur à 0 il renvoi seulement la longueur de src.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
