#ifndef ARME_H_INCLUDED
#define ARME_H_INCLUDED

typedef struct st_arme
{
    char nom[100];
    float degats;
}Arme;

void afficherArme(Arme);

#endif //ARME_H_INCLUDED
