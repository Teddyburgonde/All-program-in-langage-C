#include "jeux.h"


void afficherBibliotheque()
{
    printf("Ma Bibliotheque de jeux (%d) : \n", NB_JEUX);
    printf("\t1-Morpion\n");
    printf("\t2-Mastermind\n");
    printf("\t3-Pendu\n");
    printf("\t0-Sortir\n");
}

void selectionJeux(int selection)
{
    switch(selection)
    {
        case MORPION:
            printf(("Demarrage du jeu Morpion...\n");
        break;

        case MASTERMIND:
            printf("Demarrage de jeux MASTERMIND...\n");
        break;

        case PENDU:
            printf("Demarrage de jeux PENDU...\n");
        break;

        case SORTIE:
            printf("A bientôt !\n");
        break;

        default:
            printf("Choix invalide !\n");
        break;

    }

}
