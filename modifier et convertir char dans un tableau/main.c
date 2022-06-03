#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char message[100] = "";
    printf("Message = %s\n", message);

    // fonction strcpy
    strcpy(message, "hello");
    printf("Message = %s\n", message);

    // fonction strcat
    strcat(message, " world");
    printf("Message = %s\n", message);

    //strtol
    printf("L'entier de %s = %ld\n", "123",  strtol("123", NULL, 10));

    //strtod
    printf("Le float de %s = %f\n", "123.4", strtod("123.4", NULL));

    sprintf(message, "Salut je suis %s et j'ai %d ans", "Teddy", 36 );
    printf("message = %s\n", message);


    return 0;
}
