#include <stdio.h>

int main(int argc, char* argv[]){

    int distance = 100; //%d
    float power = 2.345f; //%f
    double super_power = 5678.432;//%f
    char initial = 'A';//%c
    char first_name[] = "Zed";//%s
    char last_name[] = "Shaw";//%s
    long universe = 1L * 1024L;//%ld 

    char nul_byte = '\0';//Null byte character

    printf("The size of the universe is: %ld\n",universe);
    
    return 0;
}