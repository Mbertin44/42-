/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:18:33 by mbertin           #+#    #+#             */
/*   Updated: 2022/03/31 12:41:25 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (!b)
		return ;
	while (i < len)
	{
		*(char *)(b + i) = (char)c;
		i++;
	}
}

int	main(void)
{	
	char str[] = "coucou";

	ft_memset(str, '$', 3);
	printf(("%s\n"), str);
	return (0);
}
