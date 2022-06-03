#include <stdio.h>
#include <stdlib.h>

int main()
{

    char lettre_utilisateur = ' ';


    printf("Entrez une lettre: ");
    scanf("%c", &lettre_utilisateur);

    printf("Vous avez entrez la lettre ASCII %C, soit: \n",lettre_utilisateur);
    printf("\t %d en décimal\n", (int)lettre_utilisateur);
    printf("\t %x en hexadecimal", (int)lettre_utilisateur);

    return 0;
}
