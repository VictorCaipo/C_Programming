#include <stdio.h>
#include <stdlib.h>//dynamic memory

/*A diferencia que el stack que es una estructura Last-in, First-out
(se gestiona automaticamente) la memoria dinamica reside en el heap
- El tamano es mucho mas grande que el stack, los datos sobreviven
hasta que tu decidas liberarlo*/

/* Funciones fundamentales de stdlib.h:
    malloc(): reserva un bloque de memoria de n bytes
    calloc(): reserva memoria y inicializa todo a cero
    realloc(): cambia el tamano de un bloque previeamente reservado, 
        util para arrays dinamicios que necesitan crecer.
    free(): librea el bloque de memoria para que el OS pueda usarlo
        denuevo.
 */

int main(void){
    
    int n;
    int *array;

    printf("Ingresa el tamano del vector (heap)\n");
    printf("Ingrese un numero decimal: ");
    scanf("%d", &n);

    //reservando memoria
    array = malloc(n*sizeof(int));
    if (array == NULL){
        printf("No se pudo asignar memoria\n");
        return 1;
    }
    
    //llenando los datos de mi array para que se vea nice
    for (int i = 0; i<n ; i++){
        array[i] = i*12;
        printf("Elemento [%d]: %d\n", i, array[i]);
        //el compilador es inteligente y sabe de cuanto en cuanto 
        //debe saltar
    }

    free(array);
    return 0;
}

/*You can access 3 memory zones:
    Stack
    Data global
    Heap
- El heap grows down, el stack grows up, if they meet overflow occurs.
- Stack is automatic and temporary (controlled by CPU and compiler) 
    Heap es manual, flexible and persistent (controlled by us)
- Stack, data global and heap live in the same physical memory, the
    difference between them is how OS manage them.*/