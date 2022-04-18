/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 12:51:24 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/15 13:17:56 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *s, size_t n)
{
	memset(s, 0, n);
}

int main(int argc, char const *argv[])
{
	char	a[] = "coucou";
	
	printf("%s\n", a);
	ft_bzero(a, 3);
	printf("%s\n", a);
	return 0;
}
