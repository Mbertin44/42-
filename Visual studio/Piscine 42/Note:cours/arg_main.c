#include<stdio.h>
#include<unistd.h>

int main(int argc, char **argv)/* Le premier parametre contient le nombre de parametre dans le main.
								  Le deuxieme parametre contient les entrées qui vont être donné au moment du ./a.out */
{
	printf("Nombre de parametre dans le main : %d\n", argc);
	printf("Premier parametre = %s\n", argv[0]);
	printf("Deuxieme parametre = %s\n", argv[1]);
	printf("Troisieme parametre = %s\n", argv[2]);
	printf("Quatrieme parametre = %s\n", argv[3]);
	return (0);
}

/* Utile pour tester un client serveur. Pas besoin de créé une interface graphique avec "Nom d'utilisateur" "mot de passe" ce genre de chose. On peut directement tester en donnant les parametres au main. Bien sur il y a plein d'autre utilité comme rentrer le nombre de joueur dans un jeu par exemple. */
