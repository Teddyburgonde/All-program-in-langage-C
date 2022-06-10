#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ----- DEFINES
#define TAILLE_LISTE 5
#define TAILLE_MAX_NOM 10

#define RETURN_OK 0
#define RETURN_KO -1

// ----- STRUCTURES
typedef struct HIGHT_SCORE
{
    char nom[TAILLE_MAX_NOM];
    long score;
}hightScore;

// ----- PROTOS
int loadHightScore(FILE* , hightScore*);
void afficherHightScore(hightScore*);

int addHightScore(hightScore*, hightScore);
int saveHightScore(FILE* , hightScore*);


// ----- MAIN
int main()
{
    char* path = "datas/HightScore.sav";
    hightScore scores[TAILLE_LISTE];

    // ouverture du fichier
    FILE* pt_fichier = fopen(path, "r+");
    if(pt_fichier == NULL)
    {
        printf("Impossible d'ouvrir le fichier %s\n", path);
        return RETURN_KO;
    }

    //chargement du fichier
    int resultat = loadHightScore(pt_fichier, scores);
    if(resultat == RETURN_KO)
    {
        printf("Impossible de lire le fichier %s\n", path);
        return RETURN_KO;
    }

    //affichage du tableau
    afficherHightScore(scores);

    //ajout d'un score
    hightScore nouveau = {"TEST", 90005};
    resultat = addHightScore(scores, nouveau);

    //affichage du tableau
    afficherHightScore(scores);

    if(resultat == RETURN_OK)
        saveHightScore(pt_fichier, scores);

    //fermeture du fichier
    if(fclose(pt_fichier) != RETURN_OK)
    {
        printf("Impossible de fermer le fichier %s\n", path);
        return RETURN_KO;
    }
    return RETURN_OK;
}

// ----- FUNCTIONS
int loadHightScore(FILE* pt_fichier, hightScore* scores)
{
    // Gestion des erreurs de parametres
    if(pt_fichier == NULL || scores == NULL)
        return RETURN_KO;

    for(int i=0; i<TAILLE_LISTE; i++)
    {
        int resultat = fscanf(pt_fichier, "%s %ld", scores[i].nom, &(scores[i].score));

        // Si il y a une erreur de lecture, on rentre des données brutes
        if(resultat != 2)
        {
            strcpy(scores[i].nom, "---");
            scores[i].score = 0;
        }
    }

    return RETURN_OK;
}

void afficherHightScore(hightScore* scores)
{
    // affichage de l'entete du tableau
    printf("\t HIGHT SCORE \n\n");
    printf("CLASSEMENT\tNOM\tSCORE\n");
    printf("-------------------------------------\n");

    // Gestion des erreurs de parametres
    if(scores == NULL)
     return;

    // affichage des lignes du tableau
    for(int i=0; i<TAILLE_LISTE; i++)
        printf("%d\t\t%s\t%ld\n", i+1, scores[i].nom, scores[i].score);
}


int addHightScore(hightScore* scores, hightScore nouveau)
{
    // Gestion des erreurs de parametres
    if(scores == NULL)
        return RETURN_KO;

    printf("Votre score joueur %s est de %ld\n", nouveau.nom, nouveau.score);
    // gestion du cas ou ce n'est pas un nouveau hight score
    if(nouveau.score < scores[TAILLE_LISTE -1].score)
        return RETURN_KO;

    // Insertion du nouveau score dans le tableau
    printf("NOUVEAU HIGHT SCORE !!!\n");
    for(int i=TAILLE_LISTE-1; i>=1; i--)
    {
        // la bonne position est trouvé
        if(nouveau.score < scores[i-1].score)
        {
            strcpy(scores[i].nom, nouveau.nom);
            scores[i].score = nouveau.score;
            return RETURN_OK;
        }
        else // pas encore la bonne position, on décale le score précédent
        {
            strcpy(scores[i].nom, scores[i-1].nom);
            scores[i].score =  scores[i-1].score;
        }
    }

    //cas de la 1ere place
    strcpy(scores[0].nom, nouveau.nom);
    scores[0].score = nouveau.score;
    return RETURN_OK;
}


int saveHightScore(FILE* pt_fichier, hightScore* scores)
{
   // Gestion des erreurs de parametres
   if(pt_fichier == NULL || scores == NULL)
        return RETURN_KO;

    // on repart du début du fichier et on réécrit tout le tableau
    rewind(pt_fichier);
    for(int i=0; i<TAILLE_LISTE; i++)
    {
        fprintf(pt_fichier, "%s %ld\n", scores[i].nom, scores[i].score);
    }

    return RETURN_OK;
}
