#include <stdio.h>
#include <stdlib.h>

int main(void){

    /*esto permite que la estructura no guarde solo datos fijos sino que
    apunte a otros lugares de la memoria*/
    typedef struct{
        int id;
        float *lecturas;

    } sensor;
    /*Algunas de s us aplicaciones son: 
    - strings dinamicos (no necesitas declarar en la memoria un array de 50
    valores, solo declaras el puntero a ese array)
    - relaciones (puntero que apunta a otros objetos o asi mismo)
    */
    
    sensor s1;
    s1.id = 104;
    s1.lecturas = (float*)malloc(20*sizeof(float));
    /*aca no solo ocurre un trade-off de memoria sino un ahorro de 
    computacion del CPU, es por eso que es tan importante
    */
    free(s1.lecturas);

    return 0;
}