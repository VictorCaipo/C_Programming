#include <stdio.h>
#include <ctype.h>

//forward declaration
int can_print_it(char ch);
void print_letters(char arg[]);
void print_arguments(int argc, char *argv[]);

int main(int argc, char *argv[])
{
    //argc: how many arguments
    //argv: contain arguments | pointer array
    print_arguments(argc, argv);
    return 0;
}

void print_arguments(int argc, char *argv[])
{
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
    isalpha: is a character? 
    isblank: is a blank character?
    */
}