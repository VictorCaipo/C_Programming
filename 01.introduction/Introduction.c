#include <stdio.h> 
/*A way to import contents of one file into this source file*/

/*The OS always run the main function*/
int main(int argc, char *argv[]){

    int distance = 1000;
    printf("You are %d miles away.\n",distance);
    /*The prinf funciton can take multiple arguments*/
    return 0;

}

/*
Compiling our C program called Introduction.c
    gcc .\Introduction.c -o Introduction (cc .\Introduction.c -o Introduction)
    You have created the file called Introduction.exe
    To run the new file you must execute ./Introduction.exe   
*/