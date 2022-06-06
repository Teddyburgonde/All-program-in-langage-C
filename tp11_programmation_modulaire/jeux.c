#include "jeux.h"
#include "morpion.h"
#include <stdio.h>
#include <stdlib.h>

void afficherBibliotheque()
{
    printf("Ma Bibliotheque de jeux (%d): \n", NB_JEUX);
    printf("\t1-Morpion\n");
    printf("\t2-Mastermind\n");
    printf("\t3-Pendu\n");
    printf("\t0-Sortir\n");
}

void selectionJeu(int selection)
{
    switch(selection)
    {
        case MORPION:
            printf("Demarrage du jeu Morpion...\n");
            morpion();
        break;

        case MASTERMIND:
            printf("Demarrage du jeu Mastermind...\n");
        break;

        case PENDU:
            printf("Demarrage du jeu Pendu...\n");
        break;

        case SORTIE:
            printf("A bientôt !\n");
        break;

        default:
            printf("Choix invalide !\n");
        break;
    }
}
