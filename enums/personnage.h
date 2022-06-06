#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

typedef enum CLASSE
{
    CLASSE_MAGE = 10,
    CLASSE_PALADIN = 20,
    CLASSE_GUERRIER

}Classe, ClassePerso;

struct st_personnage
{
    char nom[100];
    int pv;
    int pm;
};
typedef struct st_personnage Personnage;

void afficherPersonnage(Personnage);

#endif // PERSONNAGE_H_INCLUDED
