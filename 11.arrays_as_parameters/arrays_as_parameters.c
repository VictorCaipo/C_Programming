#include <stdio.h>

const int max_num = 5;

int average(int input_values[]);

int main(void){
    int mean;
    int numbers[max_num];

    printf("Enter %d numbers.\n", max_num);

    for(int index = 0; index<max_num; index++ ){
        printf("Input number %d: ",index);
        scanf("%d", &numbers[index]);
    }

    mean = average(numbers);
    /*
    When using an array as argument apears pointer decay. It means
    the array become a pointer to the first element;
    numbers == &numbers[0]
    */
   
    printf("The average of these numbers is: %d\n",mean);

}

int average(int inputvalues[]){

    int sum = 0;

    for(int index = 0; index<max_num; index++){
        sum = sum + inputvalues[index];
    }
    return (sum/max_num);
}