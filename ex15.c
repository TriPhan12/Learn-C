#include <stdio.h>

int main(int argc, char *argv[])
{
    //create 2 arrays that we care about
    int ages[] = {23, 43, 12, 89, 2};
    char *name[] = {"Alan ", "worker", "John", "Peter", "Ray"};

    //safety get the size of ages
    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    //first way using indexing
    for (i = 0; i < count; i++)
    {
        printf("%s has %d living ages.\n", ages[i], name[i]);
    }
    printf("---------------/n");

    //setup the pointer to start of arrays
    int *cur_age = ages;
    int **cur_name = name;

    //second way to use pointer
    for (i = 0; i < count; i++)
    {
        printf("%s has %d living ages.\n", cur_name[i], cur_age[i]);
    }
    printf("-----------------/n");

    //third way to use pointer
    for (i = 0; i < count; i++)
    {
        printf("%s has %d living ages.\n", *(cur_name+i), *(cur_age+i);
    }
    printf("-----------------/n");

    return 0;
}