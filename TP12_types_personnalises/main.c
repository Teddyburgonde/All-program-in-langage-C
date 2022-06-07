#define NB_MEDIAS 3
#define NB_CLIENTS 2
#include "client.h"
#include "media.h"

int main()
{
    printf("TP12: Types personnalises\n");

    //liste de medias de ma mediateque

    Media mediatheque[NB_MEDIAS] ={
        {
            "Programmer pour les Nuls grand format",
            "Olivier ENGLER et Wallace WANG",
            TYPE_BOOK,
            5
        },
        {
            "Apex legends",
            "Respawn Entertainment",
            TYPE_GAMES,
            3
        },
        {
            "MATRIX",
            "Wachowski",
            TYPE_MOVIE,
            2
        }
    };


    // liste de clients de ma mediateque
    Client clients[NB_CLIENTS] ={
        { "Arnaud", 33 },
        { "Marc", 23 }
    };

    //afficher les clients
    printf("\n------------CLIENTS ---------\n");
    for(int i=0; i<NB_CLIENTS; i++)
    {
        printf("---client %d\n", i+1);
        afficherClient(clients[i]);
    }


     //afficher les medias
    printf("\n------------MEDIAS ---------\n");
    for(int i=0; i<NB_MEDIAS; i++)
    {
        printf("---media %d\n", i+1);
        afficherMedia(mediatheque[i]);
    }

    return 0;
};
