#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("TP 3 - Les operations sur variables\n");

    //declaration des variables
    int largeur=0, hauteur=0;
    int perimetre=0, surface=0;

    // recuperation de la largeur et hauteur
    printf("Donnez la largeur et la hauteur du rectangle \n");
    scanf("%d%d", &largeur, &hauteur);

    //calcul du perimetre et de la surface du rectangle
    perimetre = 2*hauteur + 2*largeur;
    surface = hauteur * largeur;

    //Affichage des résultats
    printf("Le rectange fait %dx%d \n", largeur, hauteur);
    printf("\t perimetre = %d", perimetre);
    printf("\t surface = %d", surface);

    return 0;
}
