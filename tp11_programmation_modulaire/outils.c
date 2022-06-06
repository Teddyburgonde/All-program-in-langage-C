
#define DEBUG

#define VERSION_PROGRAMME "V01R00"
#define AUTEUR_PROGRAMME "Arnaud Mercier (arnaud.mercier.formation@gmail.com)"

#define LOG_CRITIC "CRITIC"
#define LOG_ERROR "ERROR"
#define LOG_DEBUG "DEBUG"

#define A_PROPOS(titre) printf("\n%s \n", titre); \
printf("- Version: %s (%s , %s)\n", VERSION_PROGRAMME, __DATE__, __TIME__); \
printf("- Auteur: %s\n\n", AUTEUR_PROGRAMME); \

#ifdef DEBUG
    #define DEBUG_LOG(niveau, message)\
    printf("[%s]: %s (%s:%d)", niveau, message, __FILE__, __LINE__);
#else
    #define DEBUG_LOG(niveau, message)
#endif // DEBUG
