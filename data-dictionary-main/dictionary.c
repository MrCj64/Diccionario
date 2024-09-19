#include "dictionary.h"

bool initializeDataDictionary(const char *dictionaryNom) {
    long apuntador= EMPTY_POINTER;
    
    printf("Initializing Data Dictionary...\n");

    FILE *dictionary = fopen(dictionaryNom,"wr");
    
    fwrite(&apuntador,sizeof(apuntador),1,dictionary);

    long currentDir = ftell(dictionary);
return true;
    INVESTIGAR TERMINO Magic Numbers
}
