#include <stdio.h> 
//library que nos permite interactuar con el sistema operativo (OS)

//El OS siempre busca correr la main function
int main(void){
    /*
    int     : means that the main function will return an int
    main    : is the function name
    void    :means that no parameter is needed
    */
    int age = 25;
    printf("My age is: %d Yeah I am old.\n", age);
    return 0;
}