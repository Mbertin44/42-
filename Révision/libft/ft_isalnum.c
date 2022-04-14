/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 09:41:15 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/14 09:46:47 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9' || c >= 'a' && c <= 'z'
		|| c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	main(int argc, char const *argv[])
{
	printf("%d\n", ft_isalnum('10'));
	printf("%d\n", isalnum('10'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", isalnum('a'));
	printf("%d\n", ft_isalnum('9'));
	printf("%d\n", isalnum('9'));
	return (0);
}
