#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE * fPointer;
    fPointer = fopen("cfile.txt", "w");
    fprintf(fPointer, "His name is Jackson!");

    fseek(fPointer, 12, SEEK_SET);
    // fseek(fPointer, -8, SEEK_END);
    fprintf(fPointer, "Jack!");
    // fputs("Jack!", fPointer);

    fclose(fPointer);

    printf("Written down!\n");
    return 0;
}