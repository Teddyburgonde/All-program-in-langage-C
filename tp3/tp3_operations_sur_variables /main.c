#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("TP3: operations sur variables\n");

    int cote_carre = 0;
    int perimetre = 0, surface = 0;

    // saisie utilisateur
    printf("Quel est la taille d'un côté d'un carré ? ");
    scanf("%d", &cote_carre);

    // calcul geometriques
    perimetre = cote_carre * 4;
    surface = cote_carre * cote_carre;

    //affichage resultat
    printf("Perimetre = %d\n", perimetre);
    printf("Surface = %d\n", surface);

    return 0;
}
