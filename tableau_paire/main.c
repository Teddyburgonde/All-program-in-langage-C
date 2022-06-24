#include <stdio.h>
#include <stdlib.h>

int main()
{

    int tab[4] = {12, 23, 34, 45};

    for (int i = 0; i < 4; i++)
    {
        if(tab[i] % 2 == 0)
        {
            printf("Le nombre %d est pair \n", tab[i]);
        }
    }

    return 0;
}
