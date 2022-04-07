regle_a: 
	echo "regle A"

regle_b : regle_a 
	echo "regle B"     
	
# Ma regle_b depend de ma regle_a donc il va dabord exécuter regle_a puis regle_b 

# Dans mon shell je peux simplement écrire "make" 
# ou bien "make nom_de_regle" pour selectionner une fonction particuliere dans le makefile


# 					LES VARIABLES

NOM_DE_VARIABLE = "definition de ma variable"

regle_c:
	echo $(NOM_DE_VARIABLE) 

# Les signe "$(NOM_DE_VARIABLE)" fait que ma fonction make va utiliser la variable NOM_DE_VARIABLE
# Les noms de variable sont toujours en majuscule dans un makefile


