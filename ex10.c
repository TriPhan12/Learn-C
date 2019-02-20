//switch statement

#include <stdio.h>

int main(int argc, char *argv[]){
    int i = 0;
    for (i = 1; i < argc; i++){
        printf ("argument %d: %s \n", i, argv[i] );
    };
    char *states[] = {
        "Cali", "Origon", "Washington", "Texas"
    };

    int num_state = 4;

    for (i = 0; i < num_state; i++){
        switch (i)
        {
            case 0:
                printf("The first state is: %s \n", states[i]);
                break;
            
            case 1:
                printf("The second state is: %s \n",states[i]);                
                break;

            case 2:
                printf("The third state is: %s \n", states[i]);
                break;
            
            default:
                printf("The fourth state is: %s \n",states[i]);                
                break;
        }
    }
}