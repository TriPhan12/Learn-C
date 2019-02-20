#include <stdio.h>

int main(int argc, char *argv[]){
    int i = 0;

    if (argc == 1){
        printf("You only have one argument. Please add more.\n");
    }
    else if (argc > 1 && argc < 4){
        printf("Here are your argument:\n");
        for (i = 1; i < argc; i++){
            printf("%s ", argv[i]);            
        }        
        printf("\n");
    } else {  
        printf("You have too many argument!\n");
    }
    return 0;   
}