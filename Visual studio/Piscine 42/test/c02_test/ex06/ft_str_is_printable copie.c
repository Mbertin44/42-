/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:20:04 by mbertin           #+#    #+#             */
/*   Updated: 2022/03/08 11:27:59 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
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
			if (!(str[index] >= 32 && str[index] <= 126)) /* Si la case de str N'EST PAS (!) un caractere spécial ( compris entre 32 et 126 dans ascii ) retourner 0 */
			{
				return (0);
			}
			index++;
		}
		return (1);// Sinon renvoyer 1 
	}
}

int	main(void)
{
	printf("%d\n", ft_str_is_printable("test"));
	printf("%d\n", ft_str_is_printable("\n"));	
	return (0);
}

