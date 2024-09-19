#include "dictionary.h"

int initializeDataDictionary(const char *dictionaryNom) {
    long apuntador= EMPTY_POINTER;
    
    printf("Initializing Data Dictionary...\n");

    FILE *dictionary = fopen(dictionaryNom,"wr");
    
    fwrite(&apuntador,sizeof(apuntador),1,dictionary);

    long currentDir = ftell(dictionary);
return EXIT_SUCCES;
    INVESTIGAR TERMINO Magic Numbers
}
