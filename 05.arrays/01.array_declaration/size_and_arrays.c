#include <stdio.h>

int main(void){

    //Declaracion e inicializacion
    int areas[] = {10,12,13,14,20};
    //incluso si no defines el tamano el compilador lo hacer por ti
    char name[] = "Victor";
    //al asignar el string asi el compilador asigna el caracter nulo por ti
    char full_name[] = {'C','a','i','p','o', '\0'};
    //sino asigno el caracter nulo la funcion printf no sabra cuando detenerse y imprimra valores random hasta que se en cuentre un null
    
    //Imprimiendo
    int array_size = sizeof(areas)/sizeof(areas[0]);
    for(int ii=0 ; ii<array_size ; ii++){
        printf("El valor del array[%d] es: %d\n", ii, areas[ii]);
    }
    printf("Mi nombre es: %s %s\n", name, full_name);

    return 0;
}