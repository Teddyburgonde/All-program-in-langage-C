#include <stdio.h>
#include <stdlib.h>

#define DEBUG


#define VERSION_PROGRAMME "V01R00"
#define AUTEUR "Arnaud MERCIER <arnaud.mercier.formation@gmail.com>"

#define A_PROPOS(titre) printf("\n%s \n", titre); \
printf("\t Version: %s (%s, %s)\n", VERSION_PROGRAMME, __DATE__, __TIME__); \
printf("\t Auteur: %s \n\n", AUTEUR);

#define LOG_CRITIC "CRITIC"
#define LOG_ERROR "ERROR"
#define LOG_DEBUG "DEBUG"

#ifdef DEBUG
    #define DEBUG_LOG(niveau, message) printf("[%s] %s (%s:%d)\n", niveau, message, __FILE__, __LINE__);
#else
    #define DEBUG_LOG(niveau, message) ;
#endif

int main()
{
        DEBUG_LOG(LOG_DEBUG, "test")
    #ifndef DEBUG
        A_PROPOS("TP10-Preprocesseur")
    #endif

        DEBUG_LOG(LOG_ERROR, "pointeur null !")


    return 0;
}
