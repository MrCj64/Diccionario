#include "main.h"

int main(int argc, char** argv) {

    char num[50];
    
    printf("Enter a Data Dictionary Nom: ");
    fgets(num);
    
    initializeDataDictionary(num);

    return 0;
}
