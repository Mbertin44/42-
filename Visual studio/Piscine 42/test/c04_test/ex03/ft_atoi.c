/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:28:36 by mbertin           #+#    #+#             */
/*   Updated: 2022/03/14 15:31:14 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_atoi(char *str)
{
    int    res;
    int    i;
    int    sign;

    res = 0;
    i = 0;
    sign = 1;
    while (str[i] != '\0' && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
    {
        i++;
    }
    while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return (res * sign);
}


#include <stdio.h>

int    main(void)
{
    char    a[50] = " ---+--+1234ab567";
    char    b[50] = "++1 2OPSHJKFBJNDBLJVWK";

    printf("\nValue a: %s\n", a);
    printf("Value b: %s\n", b);

    printf("\nValue a: %d\n", ft_atoi(a));
    printf("Value b: %d\n", ft_atoi(b));
}
