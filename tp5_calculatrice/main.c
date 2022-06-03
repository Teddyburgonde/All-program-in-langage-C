#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("TP5: Les conditions\n\n");

    // declaration des variables
    int nombre_1 = ' ', nombre_2 = ' ', resultat = ' ';
    char operateur = 'X';
    int operateur_valide =0;

    // recuperation des saisies utilisateur
    printf("Bonjour et bienvenue dans SUPER CALCULATOR!\n");
    printf("Indiquez l'opération mathematique je dois resoudre (sans espace):\n");
    printf("\t -Sous la forme [nombre1 opérateur nombre2] par exemple (2+3)\n");
    printf("\t -Operateurs possibles [+,-,*,/,%]\n\n\n");

    scanf("%d%c%d", &nombre_1,&operateur,&nombre_2);

    if(operateur == '/' && nombre_2 == 0 )
    {
        printf("La division par 0 est impossible!");
    }
    else
    {
        switch(operateur)
        {
            case '+' :
                resultat = nombre_1 + nombre_2;
                operateur_valide = 1;
            break;

            case '-' :
                resultat = nombre_1 - nombre_2;
                operateur_valide = 1;
            break;

            case '*' :
                resultat = nombre_1 * nombre_2;
                operateur_valide = 1;
            break;

            case '/' :
                resultat = nombre_1 / nombre_2;
                operateur_valide = 1;
            break;

            case '%' :
                resultat = nombre_1 % nombre_2;
                operateur_valide = 1;
            break;

            default :
                printf("Opérateur invalide ! \n");
                operateur_valide = 0;
            break;
        }

        if( operateur_valide)
        {
            printf("Trop simple! Le résultat est: %d %c %d = %d \n", nombre_1, operateur, nombre_2, resultat);
        }
    }

    return 0;
}
