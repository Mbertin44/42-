/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:41:24 by marvin            #+#    #+#             */
/*   Updated: 2022/04/13 10:19:37 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_intlen(int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		i++;
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*temp;
	int		i;
	int		sign;

	sign = 0;
	i = ft_intlen(n) - 1; // "-1" pour ne pas commencer par mon "\0"
	temp = ft_calloc(ft_intlen(n) + 1, sizeof(char)); // +1 car il faut '\0' à la fin
	if (!temp)
		return (NULL);
	if (n == -2147483648)
		return (ft_memcpy(temp, "-2147483648", 11));
	if (n < 0)
	{
		sign = 1;
		n *= -1; // Je passe mon négatif en positif car le '-' prend un espace en plus dans mon tableau
	}
	while (i >= 0)
	{
		temp[i] = n % 10 + '0'; // + '0' pour qu'il comprenne qu'on parle pas de ascii
		n /= 10;
		if (i == 0 && sign == 1)
			temp[0] = '-';
		i--;
	}
	return (temp);
}
/* 	Je décide de commencer par la fin car j'utilise modulo à mon avantage. 
	Je n'ai pas d'outils équivalent si jamais j'avais commencé du début. */