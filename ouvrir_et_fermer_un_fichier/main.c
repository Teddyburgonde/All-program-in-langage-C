#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pt_fichier = fopen("readme.txt","r");

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

    return 0;
}
