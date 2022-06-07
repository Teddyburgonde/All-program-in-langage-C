#include "media.h"
#include <stdio.h>

void afficherMedia(Media media)
{
    printf("    Titre: %s\n", media.titre);
    printf("    Auteur: %s\n", media.auteur);
    printf("    Type: %d\n", media.type_media);
    printf("    Dispo: %d\n", media.nb_dispo);
};
