#define NB_MEDIAS 3
#define NB_CLIENTS 2

int main()
{
    Media mediatheque[NB_MEDIAS] ={
    { "Programmer pour les Nuls grand format", "Olivier ENGLER et Wallace WANG", TYPE_BOOK, 5 },
    { "Apex legends", "Respawn Entertainment", TYPE_GAMES, 3 },
    { "MATRIX", "Wachowski", TYPE_MOVIE, 2 }
    };

    Client clients[NB_CLIENTS] ={
    { "Arnaud", 33 },
    { "Marc", 23 }
    };
}
