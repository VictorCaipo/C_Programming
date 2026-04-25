#include <stdio.h>

typedef struct{
    char id;
    int valor;
} mi_structure;

void asinacion_structure(mi_structure str);
void imprimir_structure(mi_structure str);


int main(void){

    mi_structure sensor;

    //Don't forget to clear values before using it
    printf("\nDatos del sensor:\n");
    printf("ID: %c\n", sensor.id);
    printf("Altitud: %d\n", sensor.valor);

    //this happens cuz it is easier to read bytes 4 by 4
    int structure_size = sizeof(sensor);
    printf("El size del structure es: %d\n", structure_size);
    
    //nothing change because we have to use its adress
    asinacion_structure(sensor);
    imprimir_structure(sensor);

    return 0;
}

void asinacion_structure(mi_structure str){
    str.id = 'V';
    str.valor = 10;
}


void imprimir_structure(mi_structure str){
    printf("\nDatos del sensor:\n");
    printf("ID: %c\n", str.id);
    printf("Altitud: %d\n", str.valor);
}
