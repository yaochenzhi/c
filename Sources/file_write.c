#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE * fPointer;
    fPointer = fopen("cfile.txt", "w");
    fprintf(fPointer, "Hello world\nThis is the content written by the C programming language!\n");
    fclose(fPointer);

    printf("Written!\n");
    return 0;
}