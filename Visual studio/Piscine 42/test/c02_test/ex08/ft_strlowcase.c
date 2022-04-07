/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 09:07:49 by mbertin           #+#    #+#             */
/*   Updated: 2022/03/14 09:09:32 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strlowcase(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
        i++;
    }
    return (str);
}


#include <stdio.h>


int    main(void)
{
    char a[] = "AMSKIFhDRgsdgsgRRSGaeg";
    char b[] = "ab5283272349ndjk a";
    char c[] = "";

    printf("\nString a: %s\n", a);
    printf("String b: %s\n", b);
    printf("String c: %s\n", c);

    printf("\nResult a: %s\n", ft_strlowcase(a));
    printf("\nResult b: %s\n", ft_strlowcase(b));
    printf("\nResult a: %s\n", ft_strlowcase(c));
}
