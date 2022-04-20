/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 14:52:53 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/18 12:48:39 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (NULL);
	if (src > dst)
	{
		while (len-- > 0)
		{
			*(char *)(dst + len) = *(char *)(src + len);
		}
	}
	else
	{
		while (i < len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}

int main(int argc, char const *argv[])
{
	char	a[] = "coucou";
	char	b[] = "helloo";
	//char	*c;
	
	printf("%s\n", ft_memmove(a, b, 3));
	printf("%s\n", memmove(a, b, 3));
	printf("%s\n", ft_memmove(a, b, 5));
	printf("%s\n", memmove(a, b, 5));
	//printf("%s\n", ft_memmove(c, a, 5));
	//printf("%s\n", memmove(c, a, 5));
	return 0;
}
