#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* pt_fichier = fopen("readme.txt","w");

    if(pt_fichier == NULL)
    {
        printf("Erreur lors de l'ouverture du fichier\n");
        return -1;
    }
    fputc('-', pt_fichier);
    fputs("Salut les codeurs !\n", pt_fichier);
    fprintf(pt_fichier, "Je suis %s et j'ai %d ans\n", "Ben", 36);



    int resultat = fclose(pt_fichier);
    if(resultat !=0)
    {
        printf("Erreur lors de la fermeture du fichier");
        return -2;
    }

    return 0;
}
