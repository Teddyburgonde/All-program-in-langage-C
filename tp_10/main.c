#include <stdio.h>
#include <stdlib.h>

// define
#define VERSION_PROGRAMME "R2D2"
#define AUTEUR_PROGRAMME "Teddy"
#define AUTEUR_EMAIL "banane.com"


int main()
{
    printf("TP10: le preprocesseur\n");

    putchar('\n');

    #define A_PROPOS(titre) ("TP10: le preprocesseur")

    #ifndef DEBUG
        printf("%s\n", A_PROPOS(titre));
        printf("La version du programme est %s\n", VERSION_PROGRAMME);
        printf("Il a était compiler %s à %s\n", __DATE__, __TIME__);
        printf("Il a était compiler par %s\n", AUTEUR_PROGRAMME);
    #endif

    return 0;
}
