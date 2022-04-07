/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:09:12 by mbertin           #+#    #+#             */
/*   Updated: 2022/03/08 11:17:57 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	index;

	if (str[0] == '\0')
	{
		return (1);
	}
	else
	{
		index = 0;
		while (str[index] != '\0')
		{
			if (!(str[index] >= 'A' && str[index] <= 'Z'))/*Si la case N'EST PAS (!) supérieur à "A" et inférieur à "Z" renvoyer 0. j'aurais pu aussi enlever le "!" et renvoyer 1 à la place. Le résultat serait le même.*/
				return (0);
			index++;
		}
		return (1);
	}
}

int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("TEST"));
	return (0);
}
