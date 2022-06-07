#include "personnage.h"
#include <stdio.h>

void afficherPersonnage(Personnage perso)
{
    printf("-> %s\n", perso.nom );
    printf("\t PV=%d\n", perso.pv );
    printf("\t PM=%d\n", perso.pm);
    printf("\t Classe=%d\n", perso.classe );

    printf("\t");
    afficherArme(perso.arme);
}

void equipeArme(Personnage* perso, Arme arme)
{
    (*perso).arme = arme;

    printf("%s est maintenant equipe de %s\n", perso->nom, perso->arme.nom);
}
