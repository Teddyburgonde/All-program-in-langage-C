#include <stdio.h>
#include <stdlib.h>

void nombrePaires(int* tab, int taille)
{
    for(int i = 0; i < 4; i++)
    {
        if (tab[i] % 2 == 0)
        {
            printf("Le nombre %d est pair\n", tab[i]);
        }
    }
    return 0;
}

int main( int argc, const char * argv[])
{
    int tab[4] = {12, 23, 34, 45};
    nombrePaires(tab, 4);

}

