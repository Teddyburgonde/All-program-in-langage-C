#include <stdio.h>
#include <stdlib.h>
#include "personnage.h"
#include <string.h>

int main()
{
    Classe perso = CLASSE_PALADIN;
    printf("Mon personnage est de classe %d\n", perso);


    Personnage mage = {"Merlin", 10, 125};

    Personnage guerrier;
    guerrier.pv = 50;
    guerrier.pm = 0;
    strcpy(guerrier.nom, "Arthur");

    afficherPersonnage(mage);
    afficherPersonnage(guerrier);


    return 0;
}
