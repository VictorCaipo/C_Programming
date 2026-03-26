#include <stdio.h>
#include <stdlib.h>//dynamic memory

typedef struct{
    char id[10];
    double value;
} sensor_data;

int main(void){
    int n;

    printf("Cuantos sensores deseas registrar?: ");
    scanf("%d", &n);

    sensor_data *sensors = (sensor_data *) malloc(n*sizeof(sensor_data));
    //malloc return a generic pointer

    if (sensors == NULL){
        printf("An error has happened\n");
        return 1;
    }

    for(int i=0; i<n; i++){
        printf("\nSensor %d\n", i+1);
        printf("ID: ");
        scanf("%s", sensors[i].id);//id is already a pointer

        printf("Valor: ");
        scanf("%lf", &sensors[i].value);
    }
    printf("\n--- Lista de sensores ---\n");
    
    for(int i=0; i<n ; i++){
        printf("Sensor %d -> ID: %s | Valor: %.2f\n",
        i+1,
        sensors[i].id,
        sensors[i].value);
    }
    free(sensors);
    //free memory
    return 0;
}

/*
Arrays has boundaries. You can solve that using dinamic memory

Arrays constraints:
    Define size from the begining
    If you don't use every memory space, you will waste memory
    Insert and eliminate elements imply to move so many data    

Solution Dinamic Memory:
    It allows you to create data structures that grows and decay if you
    are willing to.

You can access 3 memory zones:
    Stack
    Data global
    Heap
    *El heap grows down, el stack grows up, if they meet overflow occurs

Conclusion:
    Stack is automatic and temporary (controlled by CPU and compiler)
    Heap es manual, flexible and persistent (controlled by functions)

Stack, data global and heap live in the same physical memory, the
difference between them is how OS manage them.
*/