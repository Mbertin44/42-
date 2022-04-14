/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 09:54:26 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/14 14:37:41 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isascii(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

int	main(int argc, char const *argv[])
{
	printf("%d\n", ft_isprint(10));
	printf("%d\n", ft_isprint(10));
	printf("%d\n", ft_isprint('10'));
	printf("%d\n", ft_isprint('10'));
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint('9'));
	printf("%d\n", ft_isprint('9'));
	printf("%d\n", ft_isprint(121));
	printf("%d\n", ft_isprint(121));
	printf("%d\n", ft_isprint(128));
	printf("%d\n", ft_isprint(128));
	printf("%d\n", ft_isprint(-121));
	printf("%d\n", ft_isprint(-121));
	return (0);
}
