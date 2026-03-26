#include <stdio.h>
#include <stdlib.h>

int main(void){

    int n;
    printf("Cuantos numeros quieres guardar? ");
    scanf("%d", &n);

    //allocate memory
    int *arr = (int *) malloc(sizeof(int) *n);//int pointer

    if(arr == NULL){
        printf("Error al asignar memoria\n");
        return 1;
    }

    //read data
    for(int i=0; i<n ; i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    //print data
    printf("\nNumeros ingresados:\n");
    for(int i=0; i<n ; i++){
        printf("%d\n", *(arr + i));
    }

    //free data
    free(arr);

    return 0;
}

/*
Dynamic memory array:
    We can create using malloc function, which allocate memory in
    the heap. It allocate bytes and return a void pointer, if it
    doesn't work return a NULL pointer.
    Sizeof is important because it allows code to be portable
    Calloc y realloc are others handy functions
*/