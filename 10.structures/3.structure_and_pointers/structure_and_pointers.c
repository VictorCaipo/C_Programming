#include <stdio.h>

typedef struct{
    int id;
    float valor;
    float valor2;
} sensor;

void modify_structure(sensor *ss);

int main(void){

    //el puntero guarda la direccion al primer elemento, no existe decay
    sensor s1 = {1545, 25.5, 12.0};
    sensor *ptr_s1 = &s1;
    printf("Structure Adress: %p\n", ptr_s1);

    modify_structure(ptr_s1);
    
    return 0;
}

void modify_structure(sensor *ss){

    (*ss).id = 22;
    printf("Sensor's id: %d\n", ss->id);
    ss->id = 29;
    printf("Sensor's id: %d\n", (*ss).id);

}