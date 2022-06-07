#ifndef CLIENT_H_INCLUDED
#define CLIENT_H_INCLUDED

typedef struct st_client
{
    char nom[100];
    int age;
}Client;
void afficherClient(Client);


#endif // CLIENT_H_INCLUDED
