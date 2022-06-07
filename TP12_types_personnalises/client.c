#include "client.h"
#include <stdio.h>

void afficherClient(Client client)
{
    printf(" Nom: %s\n", client.nom);
    printf(" Age: %d\n", client.age);

    if(client.media == NULL)
        printf("  media: rien\n");
    else
        printf("  media: %s\n", client.media->titre);
}


int emprunter(Client* client, Media* media)
{
    if(client->media !=NULL)
    {
        printf("-> Vous avez deja un media en cours d'emprunt\n");
        return -1;
    }

    if(prendreMedia(media) !=0)
    {
        return -2;
    }

    printf("-> %s emprunte %s! \n", client->nom, media->titre);
    client->media = media;
    return 0;
}

int restituer(Client* client)
{
    if(client->media == NULL)
    {
        printf("-> Vous n'avez pas de medias a rendre !\n");
        return -1;
    }
    poserMedia(client->media);
    client->media = NULL;
    return 0;
}
