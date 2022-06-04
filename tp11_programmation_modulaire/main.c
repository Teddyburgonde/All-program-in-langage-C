#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choix = 0;
    do
    {
    afficherBibliotheque();
    printf("A quel jeu voulez-vous jouer?");
    fflush(stdin);
    scanf("%d", &choix);
    selectionJeu(choix);
    }while(choix != SORTIR);
    return 0;
}
