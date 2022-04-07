/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 08:51:03 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/02 10:02:40 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char a[] = "1234567890";
	char b[] = "abcd";
	int	s;

	printf("\nString a: %s\n", a);
	printf("String b: %s\n", b);
	
	s = ft_strlcpy(b, a, 4);

	printf("Copied '%s' into '%s', length %d\n", a, b, s);
}
