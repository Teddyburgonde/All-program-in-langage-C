#ifndef MEDIA_H_INCLUDED
#define MEDIA_H_INCLUDED

typedef enum MEDIA_TYPE
{
    TYPE_BOOK,
    TYPE_MUSIC,
    TYPE_MOVIE,
    TYPE_GAMES
}Type;

typedef struct st_media
{
    char titre[100];
    char auteur[100];
    Type type_media;
    int  nb_dispo;
}Media;
void afficherMedia(Media);

#endif // MEDIA_H_INCLUDED
