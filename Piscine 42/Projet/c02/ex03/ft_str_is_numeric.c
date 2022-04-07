/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 09:18:37 by mbertin           #+#    #+#             */
/*   Updated: 2022/03/08 11:30:00 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			if (!(str[i] >= '0' && str[i] <= '9'))
				return (0);
			i++;
		}
		return (1);
	}
}
