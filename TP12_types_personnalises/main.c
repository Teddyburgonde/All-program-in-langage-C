#define NB_MEDIAS 3
#define NB_CLIENTS 2

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

    afficherClient("Arnaud");
    void afficherMedia("Apex legends");

    return 0;
};
