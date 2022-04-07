#include <stdio.h>
#include <unistd.h>

/* 
 		[Déclaration tableau]
			type nom_tableau[X]; //Déclare des valeurs aléatoires

		[Initialisation]
			tableau[5] = {valeur1, valeur2, valeur3, valeur4, valeur5};
			tableau[5] = {0}; // toute les cases valent 0. Ça marche seulement pour 0 par un autre chiffre pour 10, 55, ou 1510587
			tableau[5] = {4}; // premiere case à 4 LE RESTE A 0 !		

		[Accès au tableau]
			tableau[X] : élément d'indice X (X+1 élément du tableau)
			tableau : adresse du tableau 
			*tableau : premiere élément du tableau 
			*(tableau + x) : élément d'indice X 

		(NOTE)
			tableau [5] même chose que -> *(tableau + 5)
*/
void afficher_tableau(int tab[], int taille);

int main(void)
{
	#define taille_tableau 5 //Je créé une sorte de variable pour définir la taille de mon tableau
	int tableau[taille_tableau] = {0, 10, 20, 30, 40}; // Je déclare et initialise mon tableau. J'utilise la variable taille_tableau pour définir sa taille
	int i; // je créé mon compteur

	afficher_tableau(tableau, taille_tableau);

	printf("\n\n");
	tableau[2] = -5; // Le 3eme indice de mon tableau ( oui 3eme c'est pas une erreur ) est maintenant égal à -5

	afficher_tableau(tableau, taille_tableau);

	return 0;
}

void afficher_tableau(int tab[], int taille)
{
	int i; 

	for(i = 0 ; i < taille ; i++) // j'initialise mon compteur à 0 puis je dis : temps que i est plus petit que mon tableau faire xxx puis ajouter 1 à mon compteur 
		printf("[%d]", tab[i]); // j'affiche la valeur contenu dans l'indice numéro i 
}
