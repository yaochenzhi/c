#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    char movie[20];
    char * pMovie = movie;
    
    fgets(pMovie, 20, stdin);
    puts(pMovie);
    
    return 0;
}