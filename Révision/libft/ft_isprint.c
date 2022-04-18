/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 09:54:26 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/15 11:49:07 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

int	main(int argc, char const *argv[])
{
	printf("10 = %d\n", ft_isprint(10));
	printf("10 = %d\n", isprint(10));
	printf("'10' = %d\n", ft_isprint('10'));
	printf("'10' = %d\n", isprint('10'));
	printf("'a' = %d\n", ft_isprint('a'));
	printf("'a' = %d\n", isprint('a'));
	printf("'9' = %d\n", ft_isprint('9'));
	printf("'9' = %d\n", isprint('9'));
	printf("121 = %d\n", ft_isprint(121));
	printf("121 = %d\n", isprint(121));
	printf("128 = %d\n", ft_isprint(128));
	printf("128 = %d\n", isprint(128));
	printf("-121 = %d\n", ft_isprint(-121));
	printf("-121 = %d\n", isprint(-121));
	printf("31 = %d\n", ft_isprint(31));
	printf("31 = %d\n", isprint(31));
	return (0);
}
