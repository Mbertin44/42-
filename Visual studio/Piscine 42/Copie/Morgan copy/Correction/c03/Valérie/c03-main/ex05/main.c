/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:19:46 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/03 21:04:47 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[5] = "Hello";
	char b[50] = "World";
	char c[50] = " 1234567";
//	char a1[5] = "Hello";
//	char b1[50] = "World";
//	char c1[50] = " 1234567";

	printf("\nValue a: %s\n", a);
	printf("Value b: %s\n", b);
	printf("Value c: %s\n", c);

//	printf("strlcat ->a,b: %lu -> %s\n", strlcat(a,b,3), a);
//	printf("strlcat ->a,c: %lu -> %s\n", strlcat(a,c,3), a);

	printf("ft_strlcat ->a,b: %u -> %s\n", ft_strlcat(a,b, 3), a);
	printf("ft_strlcat ->a,c: %u -> %s\n", ft_strlcat(a,c, 3), a);
}
