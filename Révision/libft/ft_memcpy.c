/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 13:59:48 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/15 15:34:36 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst || !src)
		return (NULL);
	while (n-- > 0)
		*(char *)(dst + n) = *(char *)(src + n);
	return (dst);
}

/* 	Ce code ne marche pas car il va modifier dest même si il y a un overlap 
	Je devrais plutot faire une boucle while(i < n) et incrémenter i au fur et a mesure */

int main(int argc, char const *argv[])
{
	char	a[] = "coucou";
	char	b[] = "helloo";
	
	printf("%s\n", ft_memcpy(a, b, 3));
	printf("%s\n", memcpy(a, b, 3));
	printf("%s\n", ft_memcpy(a, b, 11));
	printf("%s\n", memcpy(a, b, 11));
	return 0;
}
