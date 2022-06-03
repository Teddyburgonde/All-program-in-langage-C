#include <stdio.h>
#include <stdlib.h>

#define TAILLE_TABLEAU 15
#define NUM_VERSION "V01R00"

#define NB_HEURE_PAR_JOUR 24
#define NB_MINUTE_PAR_HEURE 60
#define NB_HEURE_PAR_JOUR (NB_HEURE_PAR_JOUR*NB_MINUTE_PAR_HEURE)

int main()
{
    printf("version: %s\n", NUM_VERSION);
    printf("3 jours = %d\n", NB_HEURE_PAR_JOUR *3);
    printf("3 jours = %d\n"), (NB_HEURE_PAR_JOUR*NB_MINUTE_PAR_HEURE) *3);
    printf("3 jours = %d\n", (24*60)*3);

    int tableau[TAILLE_TABLEAU];

    for int i=0; i<TAILLE_TABLEAU; i++;
    {
        mon_tableau[i] = i;
        printf("tab[%d] = %d\n", i, mon_tableau[i]);
    }

    return 0;
}
