/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:09:51 by mbertin           #+#    #+#             */
/*   Updated: 2022/03/07 15:16:41 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;

	if (str[0] == '\0')
	{
		return (1);
	}
	else
	{
		index = 0;
		while (str[index] != '\0')
		{
			if (!(str[index] >= 'a' && str[index] <= 'z'))
				if (!(str[index] >= 'A' && str[index] <= 'Z'))
					return (0);
		index++;
		}
		return (1);
	}
}
