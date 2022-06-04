#include <stdio.h>
#include <stdlib.h>

// define
#define VERSION_PROGRAMME "R2D2"
#define AUTEUR_PROGRAMME "Teddy"
#define AUTEUR_EMAIL "banane.com"
//macro
#define A_PROPOS(titre) ("TP10: le preprocesseur")
#define DEBUG_LOG(niveau, message) (("CRITIC,ERROR ou DEBUG"),("le message %s\n", __FILE__)

int main()
{
    printf("TP10: le preprocesseur\n");

    putchar('\n');


    #ifndef DEBUG
        printf("%s\n", A_PROPOS(titre));
        printf("La version du programme est %s\n", VERSION_PROGRAMME);
        printf("Il a était compiler %s à %s\n", __DATE__, __TIME__);
        printf("Il a était compiler par %s\n", AUTEUR_PROGRAMME);
    #endif

    #ifdef DEBUG_LOG
        printf("%s\n", DEBUG_LOG((message, niveau));
    #endif

    return 0;
}
