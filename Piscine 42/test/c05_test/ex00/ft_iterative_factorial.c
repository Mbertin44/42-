/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:10:39 by mbertin           #+#    #+#             */
/*   Updated: 2022/03/14 17:10:54 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	nb--;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}



#include <stdio.h>

int    ft_iterative_factorial(int nb);

int main(void)
{
    int v0 = -10;
    int v1 = 2;
    int v2 = 1;

    printf("\nValor %d, factorial : %d\n", v0, ft_iterative_factorial(v0));
    printf("\nValor %d, factorial : %d\n", v1, ft_iterative_factorial(v1));
    printf("\nValor %d, factorial : %d\n", v2, ft_iterative_factorial(v2));
}
