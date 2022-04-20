/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:49:06 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/18 14:12:16 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*	strlcpy va copier le nombre de caractere défini dans dstsize, de src vers 
	dst, rajouter un NULL à la fin de dst qui correspond au dernier caractere
	précisé par dstsize, et retourner le nombre de caractere que contient src. 
	Si dst_size n'est pas supérieur à 0 il renvoi seulement la longueur de src.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dest_size)
{
	size_t	i;

	i = 0;
	if (dest_size > 0)
	{
		while (src[i] && i < dest_size - 1)
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

int main(int argc, char const *argv[])
{
	char	a[] = "coucou";
	char	b[] = "hello";
	char	c[] = "mayonnaise";
	//char	*c;
	
	printf("ft_strlcpy de 3 char de b vers a = ");
	ft_strlcpy(a, b, 3);
	printf("%s\n", a);
	printf("%lu\n", strlcpy(a, b, 3));
	printf("%lu\n", ft_strlcpy(a, b, 5));
	printf("%lu\n", strlcpy(a, b, 5));
	//printf("%s\n", ft_memmove(c, a, 5));
	//printf("%s\n", memmove(c, a, 5));
	return 0;
}
