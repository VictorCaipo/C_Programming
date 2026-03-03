#include <stdio.h>
#include <ctype.h>//standar library to work with indivuduals caracters

int can_print_it(char ch);
void print_letters(char arg[]);//forward declaration

void print_arguments(int argc, char *argv[])
{
    //argc cuenta el numero de argumentos que recibio desde la terminal, el nombre del programa cuenta como argumento
    //argv es un arreglo de punteros a char que guarda cada argumento como una cadena de caracteres
    for(int i = 0; i<argc; i++){
        print_letters(argv[i]);       
    }
}

void print_letters(char arg[])
{
    for(int i = 0; arg[i] != '\0'; i++){
        char ch = arg[i];
        if (can_print_it(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }
    printf("\n");
}

int can_print_it(char ch)
{
    return isalpha(ch) || isblank(ch);
    /*
    isalpha:es una letra isblank: es un caracter en blanco, no detecta si es nulo
    devuelven un valor distinto de cero si es verdadero
    */
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}