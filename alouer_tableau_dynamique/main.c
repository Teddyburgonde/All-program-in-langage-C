#include <stdio.h>
#include <stdlib.h>

#define TAILLE 100

int main()
{
    int taille_max = 100;
    char* nom =NULL;
    nom = (char*)malloc(taille_max+1*sizeof(char));

    if(nom !=NULL)
    {
        printf("indiquez votre nom: ");
        scanf("%s", nom);

        printf("Bonjour %s\n", nom);
    }
    else
    {
        printf("Erreur d'allcocation memoire !\n");
    }
    return 0;
}
