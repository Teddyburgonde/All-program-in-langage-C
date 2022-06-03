#include <stdio.h>
#include <stdlib.h>

int main()
{
   const int CODE_PIN = 1234;
   const int MAX_TENTATIVE = 3;
   int saisie =' ';
   int nb_tentative = MAX_TENTATIVE;
    do
    {
        //lecture de la saisie
        printf("Code Pin: ");
        scanf("%d", &saisie);

        //verificcation du code pin
        if(saisie == CODE_PIN)
            printf("\tTelephone deverrouillé\n");

        else
        {
            nb_tentative--;
            printf("\tErreur de saisie, il vous reste %d tentatives\n", nb_tentative);
        }
    }while( (saisie != CODE_PIN) && (nb_tentative > 0) );


    return 0;
}
