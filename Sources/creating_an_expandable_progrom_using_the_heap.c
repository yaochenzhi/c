#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int i, howMany;
    int sum;
    float average = 0.0;
    int * pointsArray;
    
    printf("How many numbers do you want to average?\n");
    scanf(" %d", &howMany);
    
    pointsArray = (int *)malloc(howMany * sizeof(int));
    
    printf("Enter them hoss !\n");
    
    for(i=0; i<howMany; i++){
        scanf(" %d", &pointsArray[i]);
        sum += pointsArray[i];
    }
    
    average = (float)sum/ (float)howMany;
    printf("Average is %f\n", average);
    
    // looks a lot wired on windows
    
    return 0;
}