#include "personnage.h"
#include <stdio.h>

void afficherPersonnage(Personnage perso)
{
    printf("-> %s\n", perso.nom );
    printf("\t PV=%d\n", perso.pv );
    printf("\t PM=%d\n", perso.pm );


}
