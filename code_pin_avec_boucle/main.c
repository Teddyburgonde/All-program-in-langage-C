#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int CODE_SECRET = 1234;
    const int MAX_TENTATIVES = 3;
    int saisie_utilisateur = 0;

    for(int nb_tentative = 0; nb_tentative < MAX_TENTATIVES; nb_tentative ++)
    {
        printf("Entrer le code: \n");
        scanf("%d", &saisie_utilisateur);

        if(saisie_utilisateur < 0)
        {
            printf("Le code doit être suppérieur à 0!\n");
            continue;
        }

        if(saisie_utilisateur == CODE_SECRET)
        {
            printf("Bienvenue !");
            break;
        }
        else
        {
            printf("Code incorrect !\n") ;
        }
    }

    return 0;
}
