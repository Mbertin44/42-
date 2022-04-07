/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:01:58 by alvachon          #+#    #+#             */
/*   Updated: 2022/02/27 15:01:10 by alvachon         ###   ########.fr       */
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
		if ((index == 0 && i == 0) || (index == 0 && i == y - 1))
			ft_putchar('A');
		else if ((index == x -1 && i == 0) || (index == x -1 && i == y - 1))
			ft_putchar('C');
		else if (index == 0 || index == x - 1)
			ft_putchar('B');
		else
		{
			if (i == 0 || i == y - 1)
				ft_putchar('B');
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
