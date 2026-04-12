#include <stdio.h>

typedef struct{

    int id;
    char *name;

} sensor;

int main(void){
    sensor s1;
    s1.id = 73998923;
    s1.name = "Sensor 1";//character array

    printf("Sensor ID: %d\n", s1.id);
    printf("Sensor name adress: %p\n", s1.name);
    printf("Sensor name: %s\n", s1.name);
    //%s look for the value inside s1.name adress
    printf("Sensor first character: %c\n", *(s1.name));
    //printf("Sensor name: %s\n", *(s1.name));
    /*it is not allowed because *(s1.name) is a single character and
    %s is waiting for an array of characters*/
    return 0;
}