/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:52:06 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/15 12:16:24 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int main(int argc, char const *argv[])
{
	printf("%zu\n", ft_strlen("coucou"));
	printf("%zu\n", strlen("coucou"));
	printf("%zu\n", ft_strlen("1234"));
	printf("%zu\n", strlen("1234"));
	printf("%zu\n", ft_strlen(" "));
	printf("%zu\n", strlen(" "));
	printf("%zu\n", ft_strlen(""));
	printf("%zu\n", strlen(""));

	return 0;
}
