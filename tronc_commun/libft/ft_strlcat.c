/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:09:48 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/05 12:46:25 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;

	i = 0;
	j = 0;
	len_dst = ft_strlen(dst);
	if (dstsize <= 0)
		return (dstsize + ft_strlen(src));
	while (dst[i] != '\0' && i < dstsize)
		i++;
	while (src[j] != '\0' && i < dstsize - 1)
		dst[i++] = src[j++];
	if (dstsize != 0 && dstsize >= len_dst)
		dst[i] = '\0';
	if (dstsize < ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	else
		return (ft_strlen(src) + len_dst);
}
