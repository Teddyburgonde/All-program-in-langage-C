#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("TP6: Les boucles\n");

    // declaration de nos variables
    int nombre_mystere = 0, nombre_utilisateur = 0, nombre_tentatives =0, saisie_utilisateur= 0;
    const int VALEUR_MIN = 1, VALEUR_MAX = 100, MAX_TENTATIVES = 10;

    do
    {

        // géneration d'un nombre aleatoire
        srand(time(NULL));
        nombre_mystere = (rand() % (VALEUR_MAX - VALEUR_MIN + 1)) + VALEUR_MIN;
        nombre_tentatives = 0;

        printf("Devinez quel est mon nombre mystere. Indice: c'est un nombre entre %d et %d \n", VALEUR_MIN, VALEUR_MAX);
        do
        {
            if(nombre_tentatives >= MAX_TENTATIVES)
            {
                printf("Dommage ! Le nombre mystere était %d\n", nombre_mystere);
                break;
            }

            scanf("%d", &nombre_utilisateur);
            nombre_tentatives++;

            if(nombre_mystere > nombre_utilisateur)
            {
                printf("C'est plus!\n");
            }
            else if(nombre_mystere < nombre_utilisateur)
            {
                printf("C'est moins! \n");
            }
            else
            {
                printf("Bravo! Le nombre mystere était %d, vous l'avez en %d tentatives\n", nombre_mystere, nombre_tentatives);
            }
        }
        while(nombre_utilisateur != nombre_mystere );

        printf("Voulez-vous faire une nouvelle partie (1-oui 2-non) > ");
        scanf("%d", &saisie_utilisateur);

    }
    while(saisie_utilisateur != 2);

    printf("A bientôt !");
    return 0;
}
