/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 09:35:40 by mbertin           #+#    #+#             */
/*   Updated: 2022/03/15 09:35:45 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	return (ft_recursive_power(nb, power -1) * nb);
}

#include<stdio.h>

int    main(void)
{
    int    base = 4;
    int    expo = 4;

    printf("%d", ft_recursive_power(base, expo));
    return (0);
}
