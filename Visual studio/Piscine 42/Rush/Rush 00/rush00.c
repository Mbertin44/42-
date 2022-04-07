/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:01:58 by alvachon          #+#    #+#             */
/*   Updated: 2022/02/28 10:14:40 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c); // j'appel ma fonction write

void	ft_condition(int index, int y, int x) /* Je créé une fonction qui comprend des conditions pour faire une boucle et ajouter "1"  à mon compteur i sur ma largeur temps que la condition n'est pas remplie. */ 
{
	int	i;

	i = 0;	//compteur pour l'axe x ( horizontal ) 
	while (i < y)	// Quand mon compteur sera égale a y, sortir de la boucle 
	{
		if ((index == 0 && (i == 0 || i == y - 1))
			|| (index == x - 1 && (i == 0 || i == y - 1)))
			ft_putchar('o'); //	J'écris mon coin
		else if (index == 0 || index == x - 1)
			ft_putchar('-'); // J'écris mon top
		else
		{
			if (i == 0 || i == y - 1)
				ft_putchar('|');	// J'écris mon side 
			else
				ft_putchar(' '); // J'écris les espaces vide du rectangle
		}
		i++; // Je r'ajoute 1 à mon compteur pour l'axe x ( horizontal ) 
	}
}

void	rush(int y, int x) // je prend les valeurs que je déclare dans mon main 
{
	int	index;

	index = 0; // compteur pour l'axe y ( verticale )
	while (index < x)
	{
		ft_condition(index, y, x);
		ft_putchar('\n'); // je saute une ligne 
		index++; // j'ajoute 1 à mon compteur pour l'axe y ( veticale ) 
	}
}


/* QUESTION : On a pas inversé x et y la ? */ 
