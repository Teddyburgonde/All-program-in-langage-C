#include <stdio.h>
#include <stdlib.h>
#include "personnage.h"
#include <string.h>
#include "arme.h"

int main()
{
    Classe perso = CLASSE_PALADIN;
    printf("Mon personnage est de classe %d\n", perso);

    Arme baton = {"baton de verite", 20.0};
    Arme epee = {"excalibur", 10.5};


    Personnage mage = {"Merlin", 10, 125, CLASSE_MAGE};

    Personnage guerrier;
    guerrier.pv = 50;
    guerrier.pm = 0;
    guerrier.classe = CLASSE_GUERRIER;
    strcpy(guerrier.nom, "Arthur");

    equipeArme(&mage, baton);
    equipeArme(&guerrier, epee);

    afficherPersonnage(mage);
    afficherPersonnage(guerrier);


    return 0;
}
