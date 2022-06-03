#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    // déclaration des variables
    int rayon_cercle = 0;
    int diametre_cercle = 0;
    float circonference_cercle = 0.0, air_cercle = 0.0;
    int hauteur_cylinde = 0;
    float volume_cylinde = 0.0, volume_cone = 0.0;

    printf("TP4: Complements sur les variables\n");

    // Lecture des informations
    printf("Quelle est le rayon du cercle ? ");
    scanf("%d", &rayon_cercle );
    printf("Quelle est la hauteur du cylinde ? ");
    scanf("%d", &hauteur_cylinde );

    // calculs mathématiques
    diametre_cercle = rayon_cercle * 2;
    circonference_cercle  =  M_PI * (float)diametre_cercle;
    air_cercle = M_PI * rayon_cercle * rayon_cercle; /* ou pow(rayon_cercle, 2) */
    volume_cylinde = air_cercle * (float)hauteur_cylinde;
    volume_cone = volume_cylinde / 3.0;

    //affichage des resultats
    printf("Cercle de rayon %d\n", rayon_cercle);
    printf("- diametre %d\n", diametre_cercle);
    printf("- circonference %f\n", circonference_cercle);
    printf("- air %f\n", air_cercle);
    printf("- volume dun cylinde %f\n", volume_cylinde);
    printf("- volume dun cone %f\n", volume_cone);

    return 0;
}

