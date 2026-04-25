#include <stdio.h>

int main(void){
    char inchar1;
    char inchar2;

    printf("Input character 1:\n");
    inchar1 = getchar();

    printf("Input character 2:\n");
    inchar2 = getchar();

    printf("Character 1 is %d\n", inchar1);
    printf("character 2 is %d\n", inchar2);
    
    /*
    The program gives an ilusion of had finished after pressing the first argument.
    This happens because of how buffer works. Press Enter save \n in the buffer, so
    it count as another character.
    */

    return 0;
}

/*
C standar libreary provide us useful functions to create complex programs.

getchar() read first buffer character (ASCII format) | return an int
putchar() print first bugger character ASCII

When typping a character, it's saved in Buffer. Then, it is provided to the OS.
*/