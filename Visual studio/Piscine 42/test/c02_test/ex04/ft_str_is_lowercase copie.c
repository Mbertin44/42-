/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 09:54:36 by mbertin           #+#    #+#             */
/*   Updated: 2022/03/08 10:07:42 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_lowercase(char *str)
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
			if (!(str[index] >= 'a' && str[index] <= 'z'))/* Si la case contient un caractere compris entre la "a" et "z" renvoyer 0 */
				return (0);
			index++;
		}
		return (1);
	}
}

int	main(void)
{
	printf("%d",ft_str_is_lowercase("test"));
	return (0);
}

// Attention si il y a des espaces dans test ça renverra 0 car espace n'est pas considéré comme une minuscule
