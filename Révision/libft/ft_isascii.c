/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 09:47:09 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/14 09:52:34 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

int	main(int argc, char const *argv[])
{
	printf("%d\n", ft_isascii(10));
	printf("%d\n", ft_isascii(10));
	printf("%d\n", ft_isascii('10'));
	printf("%d\n", ft_isascii('10'));
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isascii('9'));
	printf("%d\n", ft_isascii('9'));
	printf("%d\n", ft_isascii(121));
	printf("%d\n", ft_isascii(121));
	printf("%d\n", ft_isascii(128));
	printf("%d\n", ft_isascii(128));
	printf("%d\n", ft_isascii(-121));
	printf("%d\n", ft_isascii(-121));
	return (0);
}
