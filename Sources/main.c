#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Headers/main.h"
/*When referencing to header files relative to your c file you should use #include "path/to/header.h"

The form #include <someheader.h> is only used for internal headers or for explicitly added directories (in gcc with the -I option).*/

int main(int argc, char const *argv[])
{
    
    printf("PROJECT: \n");
    printf("Porject Name: %s\n", projectName);
    printf("Project Target: %s\n\n", projectTarget);
    
    // 0
    printf("%s %s\n\a", "Hello", "world");
    printf("Pi is %.2f ", 3.14159265);
    printf("and one is %d\n", 1);

    // 1
    char name[4] = "yao";  // assign string to array
    int currentYear;
    int birthYear;
    int age;
    char greeting[] = "Hello world";

    // char name[4];
    // name = "yao";    // one byte for auto string terminate flag \0
    // --> error: assignment to expression with array type
    currentYear = 2019;
    birthYear = 2000;
    age = currentYear - birthYear;

    printf("My name is %s and I am %d years old\n", name, age);
    name[0] = 'Y';
    // name[0] = "Y";
    // --> warning: assignment makes integer from pointer without a cast
    printf("My name is %s and I am %d years old\n", name, age);

    char content[] = "This is the content!";
    printf("%s\n", content);
    strcpy(content, "This is the new content!");
    printf("%s\n", content);
    
    char words[20];
    printf("Please enter your words: \n");
    scanf("%s", words);     // no space input here
    printf("\n", words);    // words will not be outputted
    
    printf("Please enter your words to override: \n");
    printf("For the variable has been filled in with ")
    scanf("%[^\n]", words);  // space input is allowed here
    printf("%s\n\n", words);
    
    printf("Please input your words: \n")
    
    int a;
    int b;
    int c;
    a = b = c = 0;
    int d, e, f;
    d = e = f = 1;
    // an err var type placeholder results in no output with no err
    // printf("a is %d; b is %d; c is %d\n; d is %d; e is %d; f is %s\n", a,b,c,d,e,f);
    printf("a is %d; b is %d; c is %d\n; d is %d; e is %d; f is %d\n", a,b,c,d,e,f);
    printf("The first average is %f\n", (a+b+c+3)/3);
    printf("The second average in float mode is %f\n", (d+e+f)/3);
    printf("The second average in digital mode is %d\n", (d+e+f)/3);
    printf("The second average in digital mode with another err type place holder %f is %d\n", 1, (d+e+f)/3);

    int Jack = 1;
    int Jane = 10;
    float JackJaneAverage = (float)(Jane+Jane)/2;
    printf("JackJaneAverage %f\n", JackJaneAverage);
    
    // if statement
    if(4 < 10){
        printf("The condition turns out to be ture that 4 is lower than 10\n");
    }else{
        printf("The condition turns out to be ture that 4 is NOT lower than 10\n");
    }
    
    // int a=b=10;
    // vars can not be redefined;
    a = b = 10;
    // Shorthand if else
    (a == b) ? printf("a is equal to b") : printf("a is NOT equal to b");

    return 0;
}