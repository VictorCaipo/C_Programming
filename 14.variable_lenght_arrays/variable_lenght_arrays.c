#include <stdio.h>
/*
Until now we have worked under the assumption that an array in C is of fixed size.
This particular restriction proves to be quite limiting. Often we want to size
our arrays based on the particular situation we've encontered during execution.
Declaring varible-length array:

int calculate(int len){
    int data(len);
}

The VLA disadvantage is that compiler doesn't recognize size at the
same time of compilation, this produce less optimization, risk of
overflow and portability
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

