/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 09:17:36 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/14 09:40:13 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	main(int argc, char const *argv[])
{
	printf("%d\n", ft_isalpha('10'));
	printf("%d\n", isalpha('10'));
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", isalpha('a'));
	printf("%d\n", ft_isalpha('1'));
	printf("%d\n", isalpha('1'));
	return (0);
}
