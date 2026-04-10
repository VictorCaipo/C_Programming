#include <stdio.h>

int main(void){

    int number = 100; //%d
    float accurate_number = 2.345f; //%f
    double more_accurate_number = 5678.432;//%f
    char word = 'A';//%c
    char name[] = "Victor";//%s
    long bigger = 1024L;//%ld 
    char null_sign = '\0';//Null byte character

    printf("What's my favorite letter? It is %c\n", word);
    
    return 0;
}