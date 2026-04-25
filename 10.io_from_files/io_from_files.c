#include <stdio.h>
/*Abriendo archivo:
    fopen("file", "mode")
    modes: r (read), w (rewrite) a (write ath the end), r+ (read and write)
*/
int main(void){

    FILE *infile; //pointer type FILE
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
When working with so many data isn't practical to ask user for typing
everydata. It's better to read data from a file and save them in another
one if it's needed.

Known functions: scanf() y printf()
More general functions: fscanf() y fprintf()

fscanf(file pointer,mode,variable)
mode: %d, %f, %lf, %c, %s
fscanf: read bytes saved in a file, if it find a number return 1, if it
find a caracter return 0, if it find nothing return -1 EOF
*/