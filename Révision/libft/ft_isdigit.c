/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 09:33:00 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/14 09:39:40 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	main(int argc, char const *argv[])
{
	printf("%d\n", ft_isdigit('10'));
	printf("%d\n", isdigit('10'));
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", isdigit('a'));
	printf("%d\n", ft_isdigit('9'));
	printf("%d\n", isdigit('9'));
	return (0);
}
