/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 08:52:54 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/22 11:42:19 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*	La fonction memset() remplit les n premiers octets de la zone mémoire pointée
	 par s avec l'octet c. Il renvoi un pointeur sur la zone mémoire s */
	
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(char *)(b + i) = (char)c;
		i++;
	}
	return (b);
}
