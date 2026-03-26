#include <stdio.h>
#include <unistd.h>

int main(){

    putchar('a');
    sleep(5);
    putchar('b');
    putchar('\n');

    return 0;


}

/*
The output is obviously influence by buffer. A naive person expect to see
a
//wait 5 seconds
b
but it doesn't happen
this will be the output instead:
wait 5 seconds

*/