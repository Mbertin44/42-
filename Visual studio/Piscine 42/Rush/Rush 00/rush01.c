/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:01:58 by alvachon          #+#    #+#             */
/*   Updated: 2022/03/01 08:42:41 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_condition(int index, int y, int x)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if ((!index && !i) || (index && index == x - 1 && i == y - 1 && i))
			ft_putchar('/');
		else if ((index == 0 && i == y - 1) || (index == x - 1 && i == 0))
			ft_putchar('\\');
		else if (index == 0 || index == x - 1)
			ft_putchar('*');
		else
		{
			if (i == 0 || i == y - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		i++;
	}
}

void	rush(int y, int x)
{
	int	index;

	index = 0;
	while (index < x)
	{
		ft_condition(index, y, x);
		ft_putchar('\n');
		index++;
	}
}
