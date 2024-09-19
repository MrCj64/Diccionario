#include "dictionary.h"

void initializeDataDictionary(const char *dictionaryNom) {
    long apuntador= -1;
    
    printf("Initializing Data Dictionary...\n");

    FILE *dictionary = fopen(dictionaryNom,"wr");
    
    fwrite(&apuntador,sizeof(apuntador),1,dictionary);

    long currentDir = ftell(dictionary);

    INVESTIGAR TERMINO Magic Numbers
}
