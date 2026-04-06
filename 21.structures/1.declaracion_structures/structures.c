/*
Structures son un tipo de dato que permite agrupar datos

*/

#include <stdio.h>

//definicion 1
struct definicion_1{
    char id[4];
    int altitude;
};
struct definicion_1 s1;

//definicion 2
typedef struct{
    char id[4];
    int altitude;
} definicion_2;
definicion_2 s2;

//definicion 3
struct {
    char id[4];
    int altitude;
} s3, s4;//en este caso la estructura es anonima

//definicion 4: mas adelante en listas enlazadas

int main(void){

    definicion_2 sensor;
    //asignando variables
    sensor.id[0] = '0';
    sensor.id[1] = 'A';
    sensor.id[2] = 'B';
    sensor.altitude = 25;

    //imprimiendo
    printf("\nDatos del sensor:\n");
    printf("ID: %c%c%c\n",sensor.id[0],sensor.id[1],sensor.id[2]);
    printf("Altitud: %d\n",sensor.altitude);

    return 0;
}

