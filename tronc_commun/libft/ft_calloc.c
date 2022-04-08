/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:19:45 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/08 12:31:03 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t nbr, size_t size)
{
	void	*tab;

	tab = malloc(nbr * size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, nbr * size);
	return (tab);
}
