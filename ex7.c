#include <stdio.h>

int main(int argc, char *argv[]){
    int distance = 100;
    float power = 2.345f;
    double super_power = 5678.4532;
    char initial = 'A';
    char first_name[] = "Zed";
    char last_name[] = "Shaw";

    printf("You are %d miles aways.\n", distance);
    printf("You have %f of levels power.\n", power);
    printf("You have %f awesome super power.\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("My last name is %s.\n",last_name);
    printf("My name is %s.\n", first_name);
    printf("My full name is: %s %s \n", first_name, last_name);
    return 0;

    int bugs = 100;
    double bug_rate = 1.2;

    printf("You have %d bug at the imaginary rate of %f.\n", bugs, bug_rate);
    
    long universe_of_defects = 1L * 1024L * 1024L *1024L;
    printf("The intire universe has %ld bugs.\n",universe_of_defects);

    double expected_bug = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n", expected_bug);

    double part_of_universe = expected_bug / universe_of_defects;
    printf("That is only a %e portion of the universe.\n", part_of_universe);

    //this makes no sense, just a demo of something weird
    

}