#include <stdio.h>

int main(void){
    
    int ii = 2;
    
    //if-else conditional
    if ( ii >= 0 ){

        printf("The number %d is positive\n", ii);
    
    } else {

        printf("The number %d is negative\n", ii);
    }

    //ternary operator condition ? value 1 : value 2
    int jj = 2;

    int result = (jj >= 0) ? 1 : -1;
    
    printf("Result: %d\n", result);


    return 0;
}
