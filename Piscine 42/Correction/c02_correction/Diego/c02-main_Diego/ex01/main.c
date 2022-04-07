/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:55:49 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/02 12:31:21 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

int	main(void)
{
	char a[] = "0123456789";
	char b[] = "abcdefghijklmnopk";

	printf("\nString a:\n");
	ft_putstr(a);

	printf("\nString b:\n");
	ft_putstr(b);

	printf("\n");
	printf("\nReturn the ft_strcpy: %s \n", ft_strncpy(a, b, 5));

    printf("\nNew String a:\n");
	ft_putstr(a);

	printf("\nNew string b:\n");
	ft_putstr(b);
}
