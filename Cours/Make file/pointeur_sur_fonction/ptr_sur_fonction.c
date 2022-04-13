/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_sur_fonction.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbertin <mbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 11:19:44 by mbertin           #+#    #+#             */
/*   Updated: 2022/04/13 11:50:14 by mbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

//typedef void(*nom_du_type)(char);

/* 	Il m'est aussi possible de déclarer mon pointeur en typedef pour qu'il soit
	plus pratique à utiliser */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	//nom_du_type	pointeur_fonction; 
	/*	Ici j'appel mon pointeur sur fonction mais il n'est pas initialisé.
		J'utilise ça seulement si je déclaire mon pointeur en typedef */ 
	
	/* 	Si je déclare mon pointeur sur fonction avec un type def je n'ai plus 
		besoin de la ligne en dessous qui le déclare comme un void. Je n'ai
		plus qu'à l'initilaliser en lui donnant l'adresse de la fonction désiré.*/
		 
	void	(*pointeur_fonction)(char); // Je déclare mon pointeur qui prend un parametre char
	
	pointeur_fonction = &ft_putchar;/*	J'initialise pointeur_fonction en lui 
									donnant la valeur à l'adresse de ft_putchar*/
									
	pointeur_fonction('z'); /*	J'appel mon pointeur sur fonction qui contient
								 l'adresse d'une fonction*/
	return (0);
}
