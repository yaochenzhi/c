#include <stdio.h>
#include <stdlib.h>


void passByValue(int i);
void passByAddress(int *i);

int main()
{
    int tuna = 11;
    printf("After initialization, tuna is %d\n", tuna);

    passByValue(tuna);
    printf("Passing by value, tuna is now %d\n", tuna);

    passByAddress(&tuna);
    printf("Passing by address, tuna is now %d\n", tuna);

    return 0;
}

void passByValue(int i){
    i = 99;
    return;
}

void passByAddress(int *i){
    *i = 66;
    return;
}