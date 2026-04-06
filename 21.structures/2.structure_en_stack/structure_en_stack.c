/*

*/

#include <stdio.h>


int main(void){

    typedef struct{
        char id;
        int valor;
    } mi_structure;

    mi_structure sensor;

    //valores de la structura
    printf("\nDatos del sensor:\n");
    printf("ID: %c\n", sensor.id);
    printf("Altitud: %d\n", sensor.valor);
    //C no limpia la memoria

    //size de la structura
    int structure_size = sizeof(sensor);
    printf("El size del structure es: %d\n", structure_size);
    //uno pensaria que el procesador almacena 5 bytes, pero almacena 8
    //esto debido a que cuando la direccion es multiplo de 4 es mas facil de leer
    


    return 0;
}

