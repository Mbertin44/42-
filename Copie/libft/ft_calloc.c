/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:19:45 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/21 10:55:24 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/* La fonction calloc() alloue la mémoire nécessaire pour un tableau de nbr
	éléments de size octets, et renvoie un pointeur vers la mémoire allouée. 
	Cette zone est remplie avec des zéros. Si nmemb ou si size est nulle, 
	calloc renvoie soit NULL ou un unique pointeur qui pourra être passé 
	ultérieurement à free() avec succès. */

void	*ft_calloc(size_t nbr, size_t size)
{
	void	*tab;

	tab = malloc(nbr * size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, nbr * size);
	return (tab);
}
