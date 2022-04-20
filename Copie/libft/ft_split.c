/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:39:53 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/20 14:02:47 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/* 	ma fonction ft_count_word va me permettre de savoir combien de mots il y 
	a dans ma string src. Quand je tombbe sur un espace j'avance. Si le prochain 
	caractere n'est pas un space j'ajoute 1 à word, sinon je continue d'avancer. 
	Puis je recommence jusqu'à la fin de ma chaine" */
static	int	ft_count_word(char const *src, char sep)
{
	int	words;

	words = 0;
	while (*src)
	{
		while (*src == sep)
			src++;
		if (*src != sep && *src)
			words++;
		while (*src != sep && *src)
			src++;
	}
	return (words);
}
/* 	Je déclare **tab qui va être mon tableau qui va contenir mes différentes str,
	int words pour le nombre de str à créer, int i pour me déplacer dans ma chaine,
	et int len pour connaitre la longueur des différentes chaine de caractères.
	
	Je fais un calloc sur mon tableau de chaine "tab". Il m'alloue la mémoire pour 
	des char fois le nombre de mots que j'ai besoin (words).
	
	je déclare mon i à -1 car j'utilise i++ et pas ++i dans mon while (donc quand ma
	boucle commence i = 0 et pas -1. Je dois faire ça et pas l'inverse sinon je 
	n'arrive pas à mon derniers mot dans ma boucle).

	Temps que le charactere dans src est "sep" j'Avance dans ma chaine. À partir 
	de ce moment dans src je vais chercher le prochain "spc".
	Si je trouve un caractère à espace je m'arrête la et len sera égal à la longueur du 
	départ jusqu'au prochain sep - l'adrese de ma source "src" (ET NON PAS LES 
	CARACTERES DANS MA CHAINE).

	Par exemple si m chaine est "Hello " et que l'adresse de h est 100 et donc que
	l'adresse de " " est 105 ma len sera égal à 105 - 100. len égal à 5 (5 correspond
	au \0) 
	
	Enfin j'utilise substr pour extraire mon mot à partir de l'endroit ou je me 
	trouve dans src et le copier dans une adresse allouer dans mon tabealu tab
	
	 */
char	**ft_split(char const *src, char sep)
{
	char	**tab;
	int		words;
	int		i;
	int		len;

	if (!src)
		return (NULL);
	words = ft_count_word(src, sep);
	tab = ft_calloc(sizeof(char *), (words + 1));
	i = -1;
	while (++i < words)
	{
		while (*src && *src == sep)
			src++;
		if (ft_strchr(src, sep))
			len = ft_strchr(src, sep) - src;
		else
			len = ft_strlen(src);
		tab[i] = ft_substr(src, 0, len);
		if (!tab[i])
			return (0);
		src += len;
	}
	return (tab);
}
int main()
{
	int i = 0;
	char **tab;

	tab = ft_split("bonjour je déteste libft", ' ');
	while (i < 4)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}