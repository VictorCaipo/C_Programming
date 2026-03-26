#include <stdio.h>

struct flightType{
    char ID[4];//remember add a further caracter for \0
    int altitude;
    int longitude;
    int latitude;
    int heading;
    double airSpeed;
};

typedef struct flightType Flight;
//typedef struct nombre_struct simplificacion
Flight plane;


int main(void){

    //asignning
    plane.ID[0] = '0';
    plane.ID[1] = 'A';
    plane.ID[2] = 'B';
    plane.altitude = 5000;
    plane.longitude = 25;
    plane.latitude = 4000;
    plane.heading = 3;
    plane.airSpeed = 45;

    printf("ID: %c%c%c\n",plane.ID[0],plane.ID[1],plane.ID[2]);
    printf("Altitud: %d\n",plane.altitude);
    printf("Longitud: %d\n",plane.longitude);
    printf("Latitud: %d\n",plane.latitude);
    printf("Direccion: %d\n",plane.heading);
    printf("Velocidad: %f\n",plane.airSpeed);

    return 0;
}

/*
Sometimes it's needed to represent complex object. C gives a new tool
called struct

After creating a new structure you can access to it using a pointer
to its first element

*/