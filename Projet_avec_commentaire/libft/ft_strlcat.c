/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:09:48 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/29 13:12:57 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 	strlcat va copier x caractere (dstsize) de src à la fin de dst et retourner
	la longuer de src + dst. Si jamais dst est plus petit que dstsize dans ce 
	cas strlcat va seulement renvoyer la longueur de dst + src. Je suppose que
	cette condition existe pour dans le cas ou dst et src serait la meme
	chaine de caractere. Par exemple si je lui dis de copier 6 caractere de abc 
	( qui sera à la fois ma src et dst )dans dst ca ne sera pas possible car 
	elle contient seulement 3 caractere. */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = len_dst;
	j = 0;
	if (len_dst > dstsize || dstsize <= 0)
		return (dstsize + len_src);
	while (src[j] != '\0' && i < dstsize - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (len_src + len_dst);
}
int main(void)
{
    char    src[] = "bonjour";
    char    dest[] = "salut";
    printf(":%s:\n", src);
    printf(":%s:\n", dest);
    strlcat(dest, src, 20);
    printf(":%s:\n:%zu:\n", dest, strlcat(dest, src, 20));
    return (0);
}