#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaration des variables
    int nombre_1=0, nombre_2=0 resultat=0;
    char operateur='X';

    printf("TP: Les conditions en C\n");

    //recuperation des saisies utilisateur
    printf("Bonjour et bienvenue dans SUPER CALCULATOR!\n");
    printf("Indiquez l'opération mathématique que je doit résoudre.\n");
    printf("\t -sous la forme [nombre1 opérateur nombre2] par exemple (2+3)\n");
    printf("\t -operateurs possibles [+, -, *, /]\n");

    scanf("%d%c%d",&nombre_1,&operateur,&nombre_2);


	// gestion de la division par 0
	if(operateur == '/' && nombre_2 == 0)
	{
		printf("Attention la division par 0 est impossible!\n");
	}
	else
	{
		//gestion des opérateurs et calcul du resultat
		switch(operateur)
		{
			case '+':
				resultat = nombre_1 + nombre_2;
			break;

			case '-':
				resultat = nombre_1 - nombre_2;
			break;

			case '*':
				resultat = nombre_1 * nombre_2;
			break;

			case '/':
				resultat = nombre_1 / nombre_2;
			break;

			default:
				printf("Operateur %c invalide. Operateurs possibles [+, -, *, /]\n", operateur);
			break;
		}

		// verification de l'operateur saisie par l'utilisateur
		if(operateur == '+' || operateur == '-' || operateur == '*' || operateur == '/')
		{
			//Affichage du résultat
			printf("Trop simple! le résultat est: %d %c %d = %d.\n",nombre_1 , operateur, nombre_2, resultat);
		}
	}


    return 0;
}
