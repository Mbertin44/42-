/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 07:17:00 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/02 12:51:34 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char b[] = "sALUT, cOMMENT tU vAS ? 42mOTS qUARANTE-DEUX; cINQUANTE+ET+UN";

	printf("\nString a: %s\n", a);
	printf("String b: %s\n", b);

	printf("\nResult a: %s\n", ft_strcapitalize(a));
	printf("\nResult b: %s\n", ft_strcapitalize(b));
}
