#include <stdio.h>

int main(int argc, char *argv[]){
    
    int object;//declaring a variable
    int *ptr;//declaring a pointer

    object = 4;
    ptr = &object; //& generate the memory adress of its operand

    /*
    Inside the stack frame of main we will see that we have two variables
    ptr and object, object contains 4 and ptr contains object's adress
    */
    *ptr = *ptr + 1; //accomplishes the same as object = object + 1
    return 0;
}