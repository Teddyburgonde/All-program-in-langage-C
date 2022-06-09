#include <stdio.h>
#include <stdlib.h>
#define TAILLE_TAB 100

int main()
{
    FILE* pt_fichier = fopen("readme.txt","r");

    if(pt_fichier == NULL)
    {
        printf("Erreur lors de l'ouverture du fichier\n");
        return -1;
    }
    /* char mon_char;
    do{
        mon_char = fgetc(pt_fichier);
        printf("%c", mon_char);
    }while(mon_char != EOF);
    */

    char lecture[TAILLE_TAB];
    fgets(lecture, TAILLE_TAB, pt_fichier);
    printf("%s", lecture);
    fgets(lecture, TAILLE_TAB, pt_fichier);
    printf("%s", lecture);

    int age;
    float taille;

    fscanf(pt_fichier, "%d %f", &age, &taille);
    printf("j'ai %d ans et je mesure %f m", age, taille);



    int resultat = fclose(pt_fichier);
    if(resultat !=0)
    {
        printf("Erreur lors de la fermeture du fichier");
        return -2;
    }

    return 0;
}
