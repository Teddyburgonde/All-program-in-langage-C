#include <stdio.h>
#include <stdlib.h>

#define DOUBLER(x) ((x)*2)

int main()
{
    int bonus = 20;
    bonus = DOUBLER(bonus);
    printf("bonus = %d\n", bonus);
    printf("Je suis à la ligne %d et j'ai été écris le %s\n", __LINE__, __DATE__);
    return 0;
}
