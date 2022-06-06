#include <stdio.h>
#include <stdlib.h>
#include "personnage.h"
#include <string.h>

int main()
{
    enum CLASSE perso = CLASSE_PALADIN;
    printf("Mon personnage est de classe %d\n", perso);


    struct st_personnage mage = {"Merlin", 10, 125};

    struct st_personnage guerrier;
    guerrier.pv = 50;
    guerrier.pm = 0;
    strcpy(guerrier.nom, "Arthur");

    struct st_personnage joueur = guerrier;

    printf("-> %s\n", mage.nom );
    printf("\t PV=%d\n", mage.pv );
    printf("\t PM=%d\n", mage.pm );

    printf("-> %s\n", guerrier.nom );
    printf("\t PV=%d\n", guerrier.pv );
    printf("\t PM=%d\n", guerrier.pm );

    printf("-> %s\n", joueur.nom );
    printf("\t PV=%d\n", joueur.pv );
    printf("\t PM=%d\n", joueur.pm );



    return 0;
}
