#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jouer_avec_moi = ' ';
    int reponse_capital_france = ' ';
    int reponse_lapin = ' ';
    char prenom[100];
    int jeux_video =' ';

    printf("\tBonjour je m'appelle INTELLIGENCE 2.0. Je suis un programme \n");
    printf("\tde culture general !\n");
    printf("\tComment t'appelle tu ? \n");
    scanf("%s", &prenom);
    printf("\tBonjour %s\n", prenom);
    printf("\tTu as grandi !!!\n");
    printf("\ttu veux jouer avec moi ? \n");
    printf("\tChoisi le chiffre correspondant \n");
    printf("\t1.Oui 2.Non\n");

    // putchar("\n");

    printf("Chiffre : ");

    scanf("%d", &jouer_avec_moi);
    putchar('\n');
    if (jouer_avec_moi == 1)
    {
        printf("Quel est la capital de la France\n");
        printf("1.Paris 2. Toulouse 3. Orleans\n");
        printf("Chiffre :\n");
        scanf("%d", &reponse_capital_france);
        if (reponse_capital_france== 1)
        {
            printf("\tBravo , tu es trop forte !\n");
            printf("\tQue mange un lapin ? ");
            printf("\t1. du foin 2. Hamburger 3. Pizza\n");
            printf("Chiffre :\n");
            scanf("%d", &reponse_lapin);
            putchar('\n');
            if (reponse_lapin == 1)
            {
            printf("BRAVO\n");
            putchar('\n');
            printf("\tDans quel jeux video trouve ton des lapins ?\n ");
            printf("\t1.batman 2.les lapins crétins 3.candycrush\n");
            printf("Chiffre:\n");
            scanf("%d", &jeux_video);
            }
            if(jeux_video == 2)
            {
                printf("Bravo");
                printf("Je ne veux plus jouer avec toi\n");
                printf("Tu es trop forte aurevoir !\n");
            }

        }
    }
            return 0;
}
