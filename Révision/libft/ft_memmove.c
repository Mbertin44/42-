/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:52:53 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/15 15:11:35 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst || !src)
		return (NULL);
	if (src > dst)
	{
		while (len-- > 0)
		{
			*(char *)(dst + len_dst) = *(char *)(src + len_src);
		}
	}
	while (len-- > 0)
		*(char *)(dst + len) = *(char *)(src + len);
	return (dst);
}

int main(int argc, char const *argv[])
{
	char	a[] = "coucou";
	char	b[] = "helloo";
	
	printf("%s\n", ft_memmove(a, b, 3));
	printf("%s\n", memmove(a, b, 3));
	printf("%s\n", ft_memmove(a, b, 5));
	printf("%s\n", memmove(a, b, 5));
	return 0;
}