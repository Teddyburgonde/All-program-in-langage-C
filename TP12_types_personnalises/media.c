#include "media.h"
#include <stdio.h>

void afficherMedia(Media media)
{
    printf("    Titre: %s\n", media.titre);
    printf("    Auteur: %s\n", media.auteur);
    printf("    Type: %d\n", media.type_media);
    printf("    Dispo: %d\n", media.nb_dispo);
};

int prendreMedia(Media* media)
{
    if(media->nb_dispo <=0 )
    {
        printf("-> Desole, ce media n'est plus disponible\n");
        return -1;
    }

     media->nb_dispo --;
     return 0;
}

void poserMedia(Media* media)
{
    media->nb_dispo ++;
}
