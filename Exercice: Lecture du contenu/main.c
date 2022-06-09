#include <stdio.h>
#include <stdlib.h>

// #define TAILLE_TAB 100

int main()
{
    //ouverture du fichier en lecture seul
    FILE* pt_fichier = fopen("hello.txt", "r");

    //gestion des erreurs

    if (pt_fichier == NULL)
    {
        printf("Impossible d'ouvrir le fichier !\n");
        return -1;
    }

    printf("Contenue du fichier:\n");
    int resultat = 0;

    while(resultat != EOF)
    {
        resultat = fgetc(pt_fichier);
        printf("%c", (char)resultat);
    }

    //fermeture du fichier
    fclose(pt_fichier);

    return 0;
}

    /* printf("Contenu du fichier:\n");
    char lecture[TAILLE_TAB];
    fgets(lecture, TAILLE_TAB, pt_fichier);
    printf("%s", lecture);
    fgets(lecture, TAILLE_TAB, pt_fichier);
    printf("%s", lecture);

    if(lecture == NULL)
    {
        printf("Erreur de lecture");
    }
    */
