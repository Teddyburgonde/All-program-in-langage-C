#ifndef CLIENT_H_INCLUDED
#define CLIENT_H_INCLUDED
#include "media.h"

typedef struct st_client
{
    char nom[100];
    int age;

    Media* media;
}Client;

void afficherClient(Client);
int emprunter(Client*, Media*);
int restituer(Client*);


#endif // CLIENT_H_INCLUDED
