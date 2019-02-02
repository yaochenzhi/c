#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    char movie1[] = "The power of c";
    char * movie2 = "Get used to it";
    
    // movie1 = "error accurs if you make something like this"
    puts(movie2);
    
    movie2 = "Get used to the power of c";
    
    puts(movie2);
    printf("%s\n", movie2);
}