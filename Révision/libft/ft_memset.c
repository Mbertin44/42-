/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 12:19:48 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/15 13:59:40 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	while (len-- > 0)
		*(char *)(b + len) = (char)c;
	return (b);
}

int main(int argc, char const *argv[])
{
	char	a[] = "aaa";
	printf("%s\n", ft_memset(a, 'b', 3));
	printf("%s\n", memset(a, 'b', 3));
	return 0;
}
/* 	memset va prendre le caractere c et le copier dans la string b pendant len caractere. */
