#include "dictionary.h"

int initializeDataDictionary(const char *dictionaryNom) 
{
    long apuntador= EMPTY_POINTER;
    
    printf("Initializing Data Dictionary...\n");

    FILE *dictionary = fopen(dictionaryNom,"wr");
    
    fwrite(&apuntador,sizeof(apuntador),1,dictionary);

    printf("How many string would you like: ");
    scanf("%d",&stringToSave);
    fflush(stdin);

    for(int counter = 0;counter < stringToSave; counter++)
        {
            printf("%d",counter);
            
            NODE currentNode;
            
            currentNode.next = EMPTY_POINTER;

            printf("Enter a value for mode %d: ", counter);
            fgets(*(currentNode.value), sizeof(currentNode.value), stdin);

            fwrite(currentNode, sizeof(currentNode), 1, dictionary);
        }

    long currentDir = ftell(dictionary);
    
return EXIT_SUCCES;
   
    INVESTIGAR TERMINO Magic Numbers
}
