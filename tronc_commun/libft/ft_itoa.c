/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 11:41:24 by marvin            #+#    #+#             */
/*   Updated: 2022/04/12 11:41:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int ft_intlen(int nbr)
{
    int i;

    i = 0;
    if (nbr == 0)
      return (1);
    if (nbr < 0)
        i++;
    while (nbr > 9)
    {
        nbr /= 10;
        i++;
        if (nbr <= 9)
            i++;
    }
    return (i);
}

char *ft_itoa(int n)
{
    char    *temp;
    int     i;

    i = ft_intlen(n);
    temp = ft_calloc(ft_intlen(n), sizeof(char));
    if (!temp)
        return (NULL);
    if (n < 0)
        temp[0] = '-';
    while (i > 0)
    {
        temp[i] = n % 10 + '0';
        n /= 10;
        i--;
    }
    return (temp); 
}

int main(void)
{
    printf(ft_itoa(12345));
    return (0);
}