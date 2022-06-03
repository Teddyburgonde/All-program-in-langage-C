#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age_utilisateur = 0;
    float taille_utilisateur = 0.0;

    printf("Quel age avez-vous? et combien mesurez vous ? \n");
    scanf("%d%f", &age_utilisateur, &taille_utilisateur);

    printf("Vous avez %d ans et vous mesurez %f m\n ", age_utilisateur, taille_utilisateur);

    return 0;
}
