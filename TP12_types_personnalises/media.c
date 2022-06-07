#include "media.h"
#include <stdio.h>

void afficherMedia(medias media)
{
    printf("->%s\n", media.titre);
    printf("->%s\n", media.auteur);
    printf("->%s\n", media.type);
    printf("->%d\n", media.nombre);
};
