#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    const int TAILLE_STRING = 100;
    char date[TAILLE_STRING];
    char nom[TAILLE_STRING];
    char prenom[TAILLE_STRING];
    char couleur[TAILLE_STRING];

    //lecture saisie utilisateur

    printf("Donnez les informations suivantes :\n");

    printf("\tDate de naissaice jj/mm/aaaa: ");
    scanf("%s", &date);

    printf("\tNom: ");
    scanf("%s", &nom);

    printf("\tPrenom: ");
    scanf("%s", &prenom);

    printf("\tCouleur des yeux: ");
    scanf("%s", &couleur);

    printf("Vous vous appelez %s %s, vous êtes nee le %s \net vos yeux sont %s", prenom, nom, date, couleur);

    putchar('\n');
    return 0;
}
