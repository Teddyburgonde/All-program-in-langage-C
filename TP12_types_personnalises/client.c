#include "client.h"
#include <stdio.h>

void afficherClient(Client client)
{
    printf(" Nom: %s\n", client.nom);
    printf(" Age: %d\n", client.age);
}
