#include <stdio.h>
#include <stdlib.h>


int main()
{
    int* age = (int*)malloc(sizeof(int));

    //gestion des erreurs
    if(age == NULL)
        return -1;

    //lecture de l'age
    printf("Quel est votre age? ");
    scanf("%d", age);

    //afficher resultat
    printf("\tVous avez %d ans", *age);
    free(age);

    return 0;
}
