#include <stdio.h>
#include <stdlib.h>

#define DOUBLER(x) ((x)*2)

int main()
{
    int bonus = 20;
    bonus = DOUBLER(bonus);
    printf("bonus = %d\n", bonus);
    return 0;
}
