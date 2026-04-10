#include <stdio.h>

typedef struct{
    char id;
    int valor;
} mi_structure;

void asinacion_structure(mi_structure str);
void imprimir_structure(mi_structure str);


int main(void){

    mi_structure sensor;

    printf("\nDatos del sensor:\n");
    printf("ID: %c\n", sensor.id);
    printf("Altitud: %d\n", sensor.valor);

    int structure_size = sizeof(sensor);
    printf("El size del structure es: %d\n", structure_size);
    
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
