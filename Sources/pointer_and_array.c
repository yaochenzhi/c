#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int i;
    int arr[5] = {5, 8, 23, 29, 31};
    
    printf("Element \t Address \t Value \n");

    for(i=0; i<5; i++){
        printf("%d \t %p \t % d \n", i, &arr[i], arr[i]);
    }
    
    printf("\n");
    
    // array names are just pointers to the first element.
    printf("arr \t\t %p \n", arr);
    
    // dereference it
    printf("\n*arr \t\t %d \n", *arr);
    printf("\n*(arr+2) \t %d \n", *(arr+2));

    //
    int * pArr = arr;
    printf("int * pArr = arr;\n");
    printf("%d ", pArr[0]);
}