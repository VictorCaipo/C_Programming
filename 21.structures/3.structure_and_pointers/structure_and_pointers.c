#include <stdio.h>

typedef struct{
    int id;
    float valor;
} sensor;

void modify_structure(sensor *ss);

int main(void){

    //the pointer only points out the first element
    sensor s1 = {1, 25.5};
    sensor *ptr = &s1;
    printf("Structure Adress: %p\n", ptr);

    modify_structure(ptr);
    
    return 0;
}

void modify_structure(sensor *ss){

    (*ss).id = 73998923;
    printf("Sensor's id: %d\n", ss->id);
    ss->valor = 2333.1;
    printf("Sensor's value: %f\n", (*ss).valor);

}