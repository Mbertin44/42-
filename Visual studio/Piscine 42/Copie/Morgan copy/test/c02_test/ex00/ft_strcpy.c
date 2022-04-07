/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:04:26 by mbertin           #+#    #+#             */
/*   Updated: 2022/03/07 13:23:55 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

/* Ma fonction ft_strcpy sert à copier le contenu de src dans dest */ 

void	ft_putstr(char *src)
{
	int i;

	i = 0;
	while(src[i])
	{
		write(1, &src[i], 1);
		i++;
	}
}

char	*ft_strcpy(char *dest, char *src)  
{
	int i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i]; // je copie le contenu de la case i de la chaine src dans la case i de la chaine dest
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char dest[55];
	char src[55] = "coucou ";

	//ft_putstr(src);
	//ft_putstr(dest);
	printf("dest: %s\n src: %s \n", dest, src);
	ft_strcpy(dest, src);
	printf("dest: %s\n src: %s \n", dest, src);
	//ft_putstr(src);
	//ft_putstr(dest);
	return 0;
}
