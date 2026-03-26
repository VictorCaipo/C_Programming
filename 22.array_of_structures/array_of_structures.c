#include <stdio.h>
#include <math.h>

const int total = 3;

struct flightType{//defining a new type of structure
    char ID[7];
    int altitude;
    int longitude;
    int latitude;
};

typedef struct flightType Flight;

double AirDistance(Flight *a, Flight *b);
//argument is an structure
void NearestNeighbor(Flight aircraft[]);
//argument is an array of structures


int main(void){
    Flight aircraft[total];//arrays of structures

    //initializing variables
    for(int i = 0; i<total ; i++){
        printf("\nAvion %d\n", i+1);
        printf("ID: ");
        scanf("%s", aircraft[i].ID);
        printf("Altitud: ");
        scanf("%d", &aircraft[i].altitude);
        printf("Latitud: ");
        scanf("%d", &aircraft[i].latitude);
        printf("Longitud: ");
        scanf("%d", &aircraft[i].longitude);

    }
    NearestNeighbor(aircraft);

    return 0;
}

double AirDistance(Flight *a, Flight *b){
    double d;
    d = sqrt(
        pow(a->altitude - b->altitude,2) +
        pow(a->latitude - b->latitude,2) +
        pow(a->longitude - b->longitude,2)
        //asigning values since an adress
        //a->altitude means (*a).altitude
    );
    return d;
}

void NearestNeighbor(Flight aircraft[]){

    for(int i = 0; i<total; i++){
        double minD = 999999;//minimum distance founded
        Flight *closest = NULL;//point to the nearest plane
        for(int j= 0; j<total ; j++){
            if(i != j){
                double d = AirDistance(&aircraft[i],&aircraft[j]);
                if(d<minD){
                    minD = d;
                    closest = &aircraft[j];
                }
            }
        }
        printf("El avion mas cercano a %s es %s\n",
        aircraft[i].ID, closest->ID);//%s to print strings
    }
}