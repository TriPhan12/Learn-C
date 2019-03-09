#include "stdio.h"
#include <ctype.h>

//forward declarations

static int canPrint(char character);
static void printLetter(char arg[]);

void printArguments(int argc, char *argv[]){
    int i = 0;
    for (i = 0 ; i<argc; i++){
        printLetter(argv[i]);
    }
}

void printLetter(char argv[]){
    int i = 0;
    for (i = 0; arg[i] != '\0'; i++){
        
    }
}

int canPrint(char charater){
    return isalpha(charater) || isblank(charater);
}

