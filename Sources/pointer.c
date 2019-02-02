#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int tuna = 19;
    int * pTuna = &tuna;
    
    printf("\n");
    
    printf("%d \n", &tuna);
    printf("%p \n", &tuna);
    printf("%p \n", 10000);
    
    printf("\n");
    
    printf("Address \t Name \t Value \n");
    printf("%p \t %s \t %d \n", pTuna, "tuna", tuna);
    printf("%p \t %s \t %d \n", &pTuna, "pTuna", pTuna);
    
    printf("\n*pTuna: %d \n", *pTuna);
    
    *pTuna = 71;
    printf("\n*pTuna: %d \n", *pTuna);
    printf("tuna: %d ", tuna);
    
    printf("\n");
    
    return 0;
}