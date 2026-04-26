#include <stdio.h>

/*Sus usos son necesarios en situaciones puntuales, por ejemplo:
si queremos dentro de una funcion cambiar a donde apunta un puntero
debemos usar esto, en estructuras dinamicas como matrices y listas
*/

int main(void){

    int var = 10;
    int *pointer = &var;
    int **pointer_to_pointer = &pointer;

    printf("El valor de la variable es: %d\n", var);
    
    printf("El valor de la direccion es: %p\n", pointer);
    printf("El valor de la direccion es: %p\n", &var);
    
    printf("El valor de la direccion del puntero es: %p\n", pointer_to_pointer);
    printf("El valor de la direccion del puntero es: %p\n", &pointer);

    return 0;
}