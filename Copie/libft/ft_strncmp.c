/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:03:16 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/22 12:56:14 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*	strncmp() renvoient un entier inférieur, égal ou supérieur à zéro si s1 (ou 
	ses n premiers octets) est respectivement inférieure, égale ou supérieure 
	à s2. */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int unsigned	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < (n - 1) && s1[i])
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
