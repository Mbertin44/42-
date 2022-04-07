/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:57:27 by mbertin           #+#    #+#             */
/*   Updated: 2022/03/16 11:44:16 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int nb_arg, char **arg)
{
	int	i;
	int	j;

	i = nb_arg - 1;
	j = 0;
	while (i >= 1)
	{
		/*while (arg[i][j] != '\0')
			j++;*/
		ft_putstr(arg[i]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
