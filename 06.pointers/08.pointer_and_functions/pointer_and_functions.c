#include <stdio.h>
/*
Cambiando los valores de 2 variables
Si usaramos valores en lugar de punteros no seremos capaces de hacer el cambio de variables
debido a que las variables "x" y "y" dentro de swap se perderian cuando el stack frame de swap
culmine. Para poder modificar necesitamos que el stack frame de la funcion swap tenga acceso a
el stack frame de la funcion main (pointers)
*/
/*
C has two operators for pointer-related manipulations
*/
void swap(int *x, int *y) {//Los argumentos son punteros
    //int *x es la declaracion de un puntero, en este caso un argumento
    int temp = *x;//variable temp contiene el valor del puntero x
    *x = *y; //el valor del puntero y es igual a el valor del puntero x
    *y = temp;//el valor de temp es igual al valor del puntero y

}
/*
Los punteros permiten modificar el valor de variables desde cualquier parte del programa
debido a que trabajamos con su direccion, no con su valor en si
*/

int main(int argc, char *argv[]){ 
    
    int a = 10, b = 20;
    int *apoint = &a;//el puntero apoint apunta a la direccion de la variable a
    int *bpoint = &b;//el puntero bpoint apunta a la direccion de la variable b
    printf("a = %i b = %i\n",a,b);
    swap(apoint,bpoint);
    printf("a = %i b = %i\n",a,b);
    return 0;
}
/*
La RAM divide su memoria en 4 memorias virtuales, stack, heap, datos, codigo
El stack maneja llamada a funciones, es automatico es muy rapido
La unica diferencia entre las 4 memorias virtuales es de software
*/