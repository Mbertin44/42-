/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:56:48 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/21 10:49:23 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*	La fonction atoi() convertit un ascii en int. 

	Je déclare ma variable res pour renvoyer mon résultat, une variable sign pour
	gérer les caractères d'opération et enfin une variable i pour me déplacer dans
	ma chaine de caractére. 
	
	Je dois dabord gérer mes caracteres à espace, puis mes caractères d'opération.
	À partir de la je n'ai plus qu'à faire mon calcul dans ma boucle while :
	temps que i est égal à un nombre, res va être égal res * 10 + la case de ma 
	chaine str - '0' ( le moins zero est pour que l'ordinateur parle bien de valeur
	numérique dans le calcul et non pas de valeur ascii ) puis j'incrémente.
	
	Je retourne mon résultat multiplié par sign, qui a géré si le nombre est positif
	ou négatif ( fois -1 ou fois 1 ) */	
int	ft_atoi(const char *str)
{
	long			res;
	long			sign;
	unsigned int	i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
			i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}
