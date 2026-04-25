#include <stdio.h>

int main(void){

    int numeros[5];
    /*
    El compilador reserva un espacio para 5 enteros el "numeros" es la 
    etiqueta que representa todo ese bloque
    */
    int *puntero;
    /*
    El compilador solo reserva espacio para una direccion de memoria
    */
    
    /*
    El fenomeno Decay: si usas la palabra "numeros" el compilador lo
    traduce &numeros[0]
    Es por eso que podemos hacer la siguiente declaracion:
    int *ptr = numeros
    */
    puntero = numeros; //(&numero[0])

    printf("La direccion de numeros es: %p\n", numeros);
    printf("La direccion de punteros es: %p\n", puntero);

    return 0;
}

