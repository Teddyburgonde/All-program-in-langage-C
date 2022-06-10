#include <stdio.h>
#include <stdlib.h>
#define TAILLE_TAB 100

int main()
{
    FILE* pt_fichier = fopen("readme.txt","w");

    if(pt_fichier == NULL)
    {
        printf("Erreur lors de l'ouverture du fichier\n");
        return -1;
    }

    int resultat = fclose(pt_fichier);
    if(resultat !=0)
    {
        printf("Erreur lors de la fermeture du fichier");
        return -2;
    }
    if(remove("doc/tuto.txt") != 0)
        printf("Impossible de supprimer le fichier\n");

    return 0;
}
