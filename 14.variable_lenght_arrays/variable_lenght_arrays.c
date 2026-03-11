#include <stdio.h>
/*
Until now we have worked under the assumption that an array in C is of fixed size.
This particular restriction proves to be quite limiting. Often we want to size
our arrays based on the particular situation we've encontered during execution.
Declaring varible-length array:
int calculate(int len){
    int data(len);
}
la desventaja de este VLA es que el compilador no conoce el size en el tiempo de
compilacion, esto produce menos optimizacion, riesgo de stack overflow y portabilidad
*/

int main(void){

    int limit;

    printf("Enter vector's limit: ");
    scanf("%d", &limit);

    int array[limit];   // VLA

    for(int index = 0; index < limit ; index++){
        array[index] = 0;
        printf("array[%d] is set to 0\n", index );
    }

    return 0;
}

