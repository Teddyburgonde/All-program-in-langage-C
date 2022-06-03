#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int choix_utilisateur = 0;

    printf("Que voulez vous manger ?\n1-croissant 2-pain au chocolat 3-eclair au cafe \n: ");
    scanf("%d", &choix_utilisateur);

    int prix = (choix_utilisateur == 3)? 2:1;
    printf("Vous devez payer %d €\n", prix);

    switch(choix_utilisateur)
    {
        case 1 :
        case 2 :
            printf("Vous avez pris une vienoisserie\n");
        break;

        case  3 :
            printf("Veuilliez recuperer votre eclair au chocolat");
        break;

        default:
            printf("Je n'ai pas compris votre chiffre\n");
        break;

    }


    return 0;
}
