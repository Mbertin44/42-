/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:13:34 by mbertin           #+#    #+#             */
/*   Updated: 2022/03/31 13:15:15 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}

int	main(void)
{	
	char str[] = "coucou";

	printf(("%s\n"), str);
	ft_bzero(str, 3);
	printf(("%s\n"), str);
	return (0);
}
