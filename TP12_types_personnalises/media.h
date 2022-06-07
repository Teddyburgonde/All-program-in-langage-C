#ifndef MEDIA_H_INCLUDED
#define MEDIA_H_INCLUDED

struct st_media
{
    char titre[100];
    char auteur[100];
    char type["livre",  "musique", "film", "jeux"];
    int  nombre = 3;
};
typedef struct st_media Media;
void afficherMedia(media);

#endif // MEDIA_H_INCLUDED
