#include <stdio.h>
#include <stdlib.h>
#include "personnage.h"

int main()
{
    enum CLASSE perso = CLASSE_PALADIN;
    printf("Mon personnage est de classe %d\n", perso);
    return 0;
}
