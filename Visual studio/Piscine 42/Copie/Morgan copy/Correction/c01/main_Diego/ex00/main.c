/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:56:23 by iamongeo          #+#    #+#             */
/*   Updated: 2022/03/01 09:09:30 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	nb;

	nb = 0;
	printf("Original nb : %d\n", nb);
	ft_ft(&nb);
	printf("New nb : %d\n", nb);
}
