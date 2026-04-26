#include <stdio.h>

/*Recuerda el decay, el compilador interpreta a the_array[] como
&the_array[0]; entonces estamos pasando una direccion como argumento,
por lo tanto es necesario pasar el tamano del array para saber
cuando es el fin de este.
Incluso si defines el tamano del array el compilador lo ignora*/

void procesar(int the_array[], int the_size){
    printf("Los valores de este array son: \n");
    for (int i=0 ; i<the_size ; i++){
        printf("%d\n", the_array[i]);
    }
}
/*Puedes declarar un array como argumento de entrada de distintas
maneras, que al final todas representan lo mismo
int the_array[], int the_array[100], int *the_array (un puntero) al
final todas se traducen como direcciones por lo que el argumento
de entrada es un puntero simplemente. 
*/

int main(void){

    int the_array[] = {1, 2, 3, 4, 5};
    int the_size = sizeof(the_array)/sizeof(the_array[0]);
    procesar(the_array, the_size);

    return 0;
}