#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

enum CLASSE
{
    CLASSE_MAGE = 10,
    CLASSE_PALADIN = 20,
    CLASSE_GUERRIER

};

struct st_personnage
{
    char nom[100];
    int pv;
    int pm;
};

#endif // PERSONNAGE_H_INCLUDED
