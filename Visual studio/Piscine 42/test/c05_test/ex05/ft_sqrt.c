/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 09:58:16 by mbertin           #+#    #+#             */
/*   Updated: 2022/03/15 09:58:34 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
	{
		return (0);
	}
	while (result * result <= nb)
	{
		if (result * result == nb)
		{
			return (result);
		}
		else if (result >= 46341)
		{
			return (0);
		}
		result ++;
	}
	return (0);
}

#include <stdio.h>

int main(void)
{
    printf("La raiz cuadrada de 4 result: %d\n", ft_sqrt(4));
    printf("La raiz cuadrada de 25 result: %d\n", ft_sqrt(25));
    printf("La raiz cuadrada de 266256 result: %d\n", ft_sqrt(266256));
    printf("La raiz cuadrada de 985 result: %d\n", ft_sqrt(985));
    printf("La raiz cuadrada de 98 result: %d\n", ft_sqrt(98));
    printf("La raiz cuadrada de 65 result: %d\n", ft_sqrt(65));
    printf("La raiz cuadrada de 487 result: %d\n", ft_sqrt(487));
    printf("La raiz cuadrada de 5 result: %d\n", ft_sqrt(5));
    printf("La raiz cuadrada de 0 result: %d\n", ft_sqrt(0));
    printf("La raiz cuadrada de -5 result: %d\n", ft_sqrt(-5));
}
