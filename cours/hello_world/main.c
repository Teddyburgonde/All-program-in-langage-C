#include <stdio.h>
#include <stdlib.h>

int main()
{

    short mon_short = 10;
    printf(" mon short = %d et prends en mémoire %d octets\n", mon_short, sizeof(short));

    long mon_long = 123;
    printf(" mon long = %ld et prends en mémoire %d octets\n", mon_long, sizeof(long));

    int mon_int = -12;
    printf(" mon int = %d et prends en mémoire %d octets\n", mon_int, sizeof(int));

    unsigned int mon_unsigned = 12;
    printf(" mon unsigned = %d et prends en mémoire %d octets\n", mon_unsigned, sizeof(int));

    char mon_char = 'A';
    printf(" mon char = %c et prends en mémoire %d octets\n", mon_char, sizeof(char));

    float mon_float = 3.1416;
    printf(" mon float = %f et prends en mémoire %d octets\n", mon_float, sizeof(float));

    double mon_double = 12.6;
    printf(" mon double = %f et prends en mémoire %d octets\n", mon_double, sizeof(double));

    return 0;
}
