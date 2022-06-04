#include "MATHEMATIQUE.h"

int puissance(int base , int exposant)
{
    if(base == 0 || exposant== 0)
    {
        return 0;
    }

    int resultat = base;

    for(int i=1; i<exposant; i++)
    {
        resultat *=base;
    }

    return resultat;
}
