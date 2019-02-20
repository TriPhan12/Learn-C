#include <stdio.h>

int main(int argc, char *argv[]){
    int number[4] = {0};
    char name[4] = { 'T' };
    int i = 0;
    for (i = 0; i < 3; i++){
        printf("The four numbers are: %d ; %d ; %d ; %d\n",number[0], number[1], number[2], number[3]);
        printf("The four charactor are: %c, %c, %c, %c \n",name[0],name[1],name[2],name[3]);
        printf("%d\n",i);
        switch (i)
        {
            case 0:
                number[0] = 1;
                number[1] = 2;
                number[2] = 3;
                number[3] = 4;

                name[0] = 'M';
                name[1] = 'I';
                name[2] = 'N';
                name[3] = 'H';
                break;
            case 1:
                number[0] = 10;
                number[1] = 20;
                number[2] = 30;
                number[3] = 40;

                name[0] = 'T';
                name[1] = 'R';
                name[2] = 'I';
                //name[3] = '.';
                break;
            default:
                printf("Jump to the default option!\n");
                break;
        }
    }
    //Print the name like a string
    printf("The name is: %s\n", name);

    char *another = "TriPhan";
    printf("Another string: %s.\n", another);
    printf("'Another string''s elements are: %c %c %c %c\n", another[0], another[1], another[2], another[3]);

    return 0;
}