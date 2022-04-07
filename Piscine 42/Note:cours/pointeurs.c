div #include <stdio.h>

/*
	Interet d'un pointeur : - Modifier les données dans une fonction
							- évite la copie
							- plus rapide qu'une variable à l exécution 

 	Pointeur : variable contenant l'adresse d'une autre variable
	%d : affiche une adresse de variable ou pointeur

	[ VARIABLES ]
		maVariable = valeur de la variable
		&maVariable = adresse de la variable	
	
	[ POINTEURS ]
		*monPointeur = NUL ou *monPointeur = &maVariable
		( déclaration ou initialisation d'un pointeur ) 

		monPointeur : adresse de la variable pointée 
		*monpointeur : valeur de la variable pointée ( la valeur d'un pointeur est forcément son adresse. j'enregistre temporairement une valeur dans l'adresse )  
		&monPointeur : je pointe l'adresse de la variable

	https://youtu.be/Qra-0U_jEKs?t=1493
		
*/

void inverser_nombres(*Pt_a, *Pt_b) // *Pt_a et *Pt_b sont la valeur de l'adresse qu'on à donné dans les parametres de inverser_nombres. Donc *Pt_a = 15 et *Pt_b = 28 
{
	int temporaire = 0;

	temporaire = *Pt_b; // temporaire est égal à la valeur de l'adresse de Pt_b ( 28 )
	*Pt_b = *Pt_a; // la valeur de l'adresse de Pt_b est égal à l'adresse de Pt_a ( 15 )
	*Pt_a = temporaire; //la valeur de l'adresse Pt_a est égal à temporaire ( 28 ) 

}

int main (void)
{
	int nombreA = 15;
	int	nombreB = 28;

	int *pointeurSurNombreA = &nombreA; // la variable pointeurSurNombreA = à l'adresse de la variable de nombreA
	int *pointeurSurNombreB = &nombreB; // la variable pointeurSurNombreB = à l'adresse de la variable de nombreB

	printf("Avant : nombreA = %d et nombreB = %d\n", nombreA, nombreB);
	inverser_nombres(pointeurSurNombreA, pointeurSurNombreB);// Je donne l'adresse des variable nombreA et nombreA
	printf("Apres : nombreA = %d et nombreB = %d\n", nombreA, nombreB);
	return 0;
}

// Autre exemple :
 
void change_nombre(int *nb)
{
	*nb = 15
}

int main ()
{
	int nombre = 0;

	printf("Avant nombre = %d\n", nombre);
	change_nombre(&nombre);
	printf("Apres nombre = %d\n", nombre);

	return 0;
}
