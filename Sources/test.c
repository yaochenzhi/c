#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int a = 'a';
    printf("a is %c\n", a);
    printf("a is %d\n", a);

    int b = 97;
    printf("b is %c\n", b);
    printf("b is %d\n", b);

    if (a == b){
        printf("a is equal to b!\n");
    }
    
    int c = 'c';
    char d = 'c';
    
    int e = 'e';
    int f = '8';
    int g = 8;
    printf(sizeof(e));
    //printf(sizeof(f));
    //printf(sizeof(g));
    
    if( isalpha(e) ){
        printf("%c is a letter");
        if( isupper(e) ){
            printf(" and it's upper case!\n");
        }else {
            printf(" and it's lower case!\n");
        }
    }
    
    if ( isdigit(f) ){
        printf("%c is a digit!\n");
    }
    
    //string g = "97";
    //printf("g is %d ", g);
    
    
    
    
    

    return 0;
}