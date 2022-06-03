#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mon_int = 12;
    int prix = 12000;

    char mon_char = 'A';
    int* p_int = 0;

    p_int = &mon_int;

    printf("Mon int = %d, adresse = %p\n", mon_int, &mon_int);
    printf("p_int = %p, *p_int= %d\n", p_int, *p_int);

    p_int = &prix;
    printf("p_int = %p, *p_int= %d\n", p_int, *p_int);

    printf("Mon char = %c, adresse = %p\n", mon_char, &mon_char);
    return 0;
}
