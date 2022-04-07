/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 09:02:02 by mbertin           #+#    #+#             */
/*   Updated: 2022/03/14 09:06:48 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>

char *ft_strupcase(char *str);

int    main(void)
{
    char a[] = "AMSKIFhDRgsdgsgRRSGaeg";
    char b[] = "ab5283272349ndjk a";
    char c[] = "";

    printf("\nString a: %s\n", a);
    printf("String b: %s\n", b);
    printf("String c: %s\n", c);

    printf("\nResult a: %s\n", ft_strupcase(a));
    printf("\nResult b: %s\n", ft_strupcase(b));
    printf("\nResult a: %s\n", ft_strupcase(c));
}
