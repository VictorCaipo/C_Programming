#include <stdio.h>
/*Abriendo archivo:
    fopen("nombre del archivo", "modo de uso")
    modo de uso puede ser r (leer), w (reescribir) a (escribir
    al final), r+ (leer y escribir)
*/
int main(void){

    FILE *infile; //puntero tipo FILE
    FILE *outfile;
    int ages[50];
    int suma = 0;
    int ii = 0;
    double promedio;

    infile = fopen("edades_familia.txt", "r");
    outfile = fopen("promedio_edades.txt", "w");

    if(infile != NULL && outfile != NULL){
        printf("Se abrieron los archivos con exito.\n");

        while((fscanf(infile, "%d", &ages[ii]) == 1) &&  ii < 50){
            printf("Existe al menos un byte por leer.\n");
            suma = suma + ages[ii];
            ii++;
        }
        promedio = (double) suma / ii;

        fprintf(outfile, "El promedio es: %f\n", promedio);
        fclose(infile);
        fclose(outfile);

    } else{
        printf("fopen unsuccessful!\n");
    }
    return 0;
}

/*
Cuando se trabaja con muchos datos no es practico pedir al usuario 
los escriba en teclado, es mejor leer los datos desde un archivo y
guardar resultados en otro archivo si es necesario.

En C esto se hace mediante streams(flujos) que estan conectados a
archivos

Funciones conocidas: scanf() y printf()
Funciones mas generales: fscanf() y fprintf()
*/

 /*
fscanf(puntero,"formato",variable donde se almacena) lee
datos desde un archivo
formato: %d, %f, %lf, %c, %s
fscanf lee la cantidad de bytes almacenados en el archivo
si encuentra un numero devuelve 1, si encuentra una letra
devuelve 0 y si no efncuentra nada -1 (EOF)
*/