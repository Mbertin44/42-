/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 09:18:37 by mbertin           #+#    #+#             */
/*   Updated: 2022/03/08 09:46:17 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_numeric(char *str)
{
	int i; 

	if(str[0] == '\0')
	{
		return (1); // Si le caractere de la case est vide renvoyer 1
	}
	else
	{
		i = 0;
		while(str[i] != '\0')
		{
			if(!(str[i] >= '0' && str[i] <= '9'))
				return (0); /* Si les caracteres dans la chaine sont entre 0 et 9 renvoyer 0 */
			i++;
		}
		return (1); /* Sinon ( donc un un autre caractere que numérique ) renvoyer 1 */
	}
}

int	main(void)
{
	char a[] = "0000";
	char b[] = "abcd";
	char c[] = "";	
	
	printf("%d\n", ft_is_numeric(a));
	printf("%d\n", ft_is_numeric(b));
	printf("%d\n", ft_is_numeric(c));
	printf("%d\n", ft_is_numeric("coucou"));
	return 0;
}
