/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vajean <vajean@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:03:25 by vajean            #+#    #+#             */
/*   Updated: 2022/03/08 13:04:01 by vajean           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	main(void)
{
	int	base = 2;
	int	expo = 5;

	printf("%d", ft_iterative_power(base, expo));
	return (0);
}