/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:07:18 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/21 10:59:42 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/* isalpha va chercher si 'c' est un caractere alphabétique. Si c'est le cas il 
	renvoyer 1 sinon il va renvoyer 0 */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z' ))
		return (1);
	return (0);
}
