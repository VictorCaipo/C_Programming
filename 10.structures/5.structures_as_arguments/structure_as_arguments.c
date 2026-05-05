#include <stdio.h>
#include <math.h>

/* Para acceder a una estructura tenemos 2 opciones:
    Paso por valor (a copy)
    Paso por referencia (pointer)
*/

typedef struct{
    int id;
    float value;
} sensor;


void imprimir_copia(sensor ss){
    ss.id = 730;
    ss.value = 100;
    printf("El valor del sensor en el stack de la funcion imprimir %d es : %f\n", ss.id, ss.value);
}

void modify_sensor(sensor *p_sensor){
    p_sensor->id = 1000; //(*p_sensor).id
    /*se podria modificar los siguientes valores usando aritmetica
    de punteros, pero aparece un problema el padding (relleno de
    memoria que realiza el OS), la solucion es pasar los otros
    valores a modificar como argumentos*/
}

int main(){
    sensor current_sensor = {21, 12.6};
    sensor *pointer_current = &current_sensor;
    imprimir_copia(current_sensor);
    printf("El valor del sensor %d en el stack del main es: %f\n", current_sensor.id, current_sensor.value);
    /*Esto demuestra que solo modificamos el valor en el stack de la
    funcion imprimir copia y pasamos valor por valor, normalmente
    se usa cuando la estructura es pequena o no quieres que se alteren
    los datos originales*/
    modify_sensor(pointer_current);
    printf("El valor del sensor %d en el stack del main es: %f\n", current_sensor.id, current_sensor.value);

    return 0;
}

