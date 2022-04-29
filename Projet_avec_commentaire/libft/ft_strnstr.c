/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:50:13 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/15 11:39:33 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *str, const char *found, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (found[i] == '\0')
		return ((char *)str);
	while (i < n && str[i] != '\0')
	{
		j = 0;
		while (j + i < n && str[i + j] == found[j]) /*	Pourquoi j + i ? Dans le cas ou je trouve 
													une partie de mon aiguille dans mon str mais 
													pas en entier, c'est possible que mon aiguille
													soit plus loin dans ma str, donc je vais reprendre
													ma recherche à l'endroit ou je me suis arrété. 
													Donc j + i car je n'incrémente plus i dans la boucle.*/ 
	
		{
			if (found[j + 1] == '\0')
				return ((char *) str + i); /* 	ATTENTION je ne renvois pas le caractere [i],
												mais je renvois ma chaine str a partir du 
												caractere i. */
			j++;
		}
		i++;
	}
	return (NULL);
}

int main(int argc, char const *argv[])
{
	printf("%s\n", ft_strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", 9));
	return 0;
}
