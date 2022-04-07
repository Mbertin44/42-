/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 09:16:54 by mbertin           #+#    #+#             */
/*   Updated: 2022/03/15 09:20:05 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return(result);
}

#include<stdio.h>

int    main(void)
{
    int    base = 2;
    int    expo = 5;

    printf("%d", ft_iterative_power(base, expo));
    return (0);
}
