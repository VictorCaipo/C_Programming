#include <stdio.h>
#include <stdlib.h>

int main(void){

    int n;
    printf("How many numbers do you want to save? ");
    scanf("%d", &n);

    //allocate memory
    int *arr = (int *) malloc(sizeof(int) *n);
    //casting void pointer into a int pointer

    if(arr == NULL){
        printf("Error assigning values\n");
        return 1;
    }

    //read data
    for(int i=0; i<n ; i++){
        printf("Assigning number %d: ", i+1);//printing headers
        scanf("%d", &arr[i]);
    }

    //print data
    printf("\nAssigned values:\n");
    //  /əˈsaɪnd/
    for(int i=0; i<n ; i++){
        printf("%d\n", *(arr + i));
    }
    //free data
    free(arr);
    return 0;
}

/*
Dynamic memory array:
    We can create them using malloc function, which allocate memory in
    the heap. The malloc function allocate bytes and return a void pointer,
    if it doesn't work it will return a NULL pointer.
    Sizeof is important because it allows code to be portable
    Calloc y realloc are others handy functions
*/