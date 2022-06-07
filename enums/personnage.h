#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

#include "arme.h"

typedef enum CLASSE
{
    CLASSE_MAGE = 10,
    CLASSE_PALADIN = 20,
    CLASSE_GUERRIER = 30

}Classe, ClassePerso;

struct st_personnage
{
    char nom[100];
    int pv;
    int pm;
    Classe classe;

    Arme arme;

};
typedef struct st_personnage Personnage;

void afficherPersonnage(Personnage);

void equipeArme(Personnage* perso, Arme arme);

#endif // PERSONNAGE_H_INCLUDED
