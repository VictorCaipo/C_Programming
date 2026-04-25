#include <stdio.h>

/*
making:
    char word[10];
    char *cptr;
    cptr = word;
we are able to do that because word is a direction to the first character of the array
*/

const int max_string = 20;

int string_leng(char string[]);
void char_swap(char *firstval, char *secondval);
void reverse(char string[]);


int main(void){
    char input[max_string];

    printf("Input a word less then 20 characters: ");
    scanf("%s", input);

    reverse(input);
    printf("The word reversed is %s.\n",input);
    
    return 0;
}

int string_leng(char string[]){//tell us how long the arrays is
    int index = 0;
    while (string[index] != '\0'){
        index = index + 1;
    }
    return index;
}

void char_swap(char *firstval, char *secondval){
    //change values between two characters
    char tempval;
    tempval = *firstval;
    *firstval = *secondval;
    *secondval = tempval;
}

void reverse(char string[]){
    int lenght;
    lenght = string_leng(string);
    for (int index = 0; index < (lenght/2) ; index++){
        char_swap(&string[index], &string[lenght - (index + 1)]);
    }
}