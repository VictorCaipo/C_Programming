#include <stdio.h>

int main(int argc, char *argv[]){
    int areas[] = {10,12,13,14,20};
    char name[] = "Zed";
    char full_name[] = {
        'Z', 'e', 'd',
        ' ', 'A', '.', ' ',
        'S', 'h', 'a', 'w', '\0'
    };
    printf("The size of an int: %ld\n",sizeof(int));//response in bytes
    printf("The size of areas: %ld\n",sizeof(areas));
    
    printf("The size of a char: %ld\n",sizeof(char));
    printf("The size of name: %ld\n",sizeof(name));
    printf("The size of full_name: %ld\n",sizeof(full_name));
    /*
    Size of char is of 1 byte but name contains 4 bytes because of \0 character
    */
    return 0;
}