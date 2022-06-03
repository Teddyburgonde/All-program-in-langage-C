#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("TP2: Memoire et Variables!\n");


    int mon_int = -12;
    printf("mon int = %d et prends en mémoire %d octets\n", mon_int, sizeof(int));

    short mon_short = 32;
    printf("mon short = %d et prends en mémoire %d octects\n", mon_short, sizeof(short));

    long mon_long = 65000;
    printf("mon long = %ld et prends en mémoire %d octects\n", mon_long, sizeof(long));

    float mon_float = 3.1416;
    printf("mon float = %f et prends en mémoire %d octects\n", mon_float, sizeof(float));

    double mon_double = 325.12;
    printf("mon double = %f et prends en mémoire %d octects\n", mon_double, sizeof(double));

    char mon_char = 'x';
    printf("mon char = %c et prends en mémoire %d octects\n", mon_char, sizeof(char));

    return 0;
}
