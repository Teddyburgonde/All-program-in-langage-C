#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pt_fichier = fopen("data/readme.txt","r");

    if(pt_fichier == NULL)
    {
        printf("Erreur lors de l'ouverture du fichier\n");
    }

    return 0;
}
