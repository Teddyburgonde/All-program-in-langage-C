#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nom_utilisateur = ' ';
    int information_supplementaire = ' ';

    printf("Bonjour je m'appelle Conan. Je suis un programme\n");
    printf("qui n'a rien a envier aux meilleurs détectives du monde !\n");
    printf("Avec un simple prénom et les empruntes\n");
    printf("de tes doigts quand ils touchent le clavier\n");
    printf("Je peux te dire des informations sur toi\n");
    printf("Vas-y, Entre le chiffre correspondant à ton prénom s'il te plaît : \n");
    printf("1.Franck 2.Un autre prenom à travers le monde\n");

    // putchar("\n");

    printf("Chiffre : ");

    scanf("%d", &nom_utilisateur);
    putchar('\n');
    if (nom_utilisateur == 1)
    {
        printf("Hummm grace à mon intelligence artificielle j'ai pu comprendre que\n");
        printf("ça risque d'etre vexant pour vous...\n");
        printf("donc j'ai choisi de le dire en mode horoscope\n");
        printf("ça sera plus FUN n'est ce pas ? :)\n");
        putchar('\n');
        printf("Amour: je pense que vous devriez apprendre à fabriquer un robot féminin\n");
        printf("ça vous prendra moins de temps d'apprendre a faire cela\n");
        printf("plutôt d'essayer de trouver une petite amie. Parole de machine\n");
        putchar('\n');
        printf("Argent : Eintein à dit Uber eat c'est qu'un trou noir\n");
        printf("qui bouffe toutes vos économies !\n");
        putchar('\n');
        printf("Santé : c'est chaud...\n");
        printf("Tu as vue en horoscope c'est plus fun^^\n ");
        putchar('\n');
    }

    else if (nom_utilisateur == 2)
    {
        printf("Je ne connais rien sur toi, tu es un nobody\n");
        printf("tu ne pèse pas dans le game désolé\n");

    }

    else
    {
        printf("Vous n'avez pas taper un chiffre valable\n");
    }

        printf("Voulez vous d'autre informations sur vous ?\n");
        printf("1.Oui 2.Non\n");
        printf("Chiffre :\n");
        scanf("%d", &information_supplementaire);
        putchar('\n');
        if (information_supplementaire == 1)
        {
            printf("Vous êtes une personne trop stressé !\n");
            printf("Cool raoul , votre bla bla car sera au rdv\n");
            printf("Aurevoir\n");
        }
        else if ( information_supplementaire == 2)
        {
            printf("Vous êtes Fragile ! Aurevoir\n");
        }
        else
        {
            printf("Vous n'avez pas taper un chiffre valable, Aurevoir\n");
        }


    return 0;
}
