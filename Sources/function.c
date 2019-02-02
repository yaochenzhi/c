#include <stdio.h>
#include <stdlib.h>


void helloPrint();

int main()
{
    helloPrint();
    return 0;
}

void helloPrint(){
    printf("%s\n", "Hello world printed via the corresponding function!");
    return;
}