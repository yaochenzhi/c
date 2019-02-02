#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE * fPointer;
    fPointer = fopen("cfile.txt", "a");
    fprintf(fPointer, "This is the content appended by the C programming language!\n");
    fclose(fPointer);

    printf("Appended!\n");
    return 0;
}