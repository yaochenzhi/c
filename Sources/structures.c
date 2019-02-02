#include <stdio.h>
#include <stdlib.h>
#include "../../Headers/UserInfo.h"

int main(){
    struct user user01;
    struct user user02;
    
    user01.userID = 1;
    puts("Please enter your age: ");
    gets(user01.age);
    puts("Please enter your first name: ");
    gets(user01.firstName);
    
    printf("user01's id is %d \n", user01.userID);
    printf("user01's age is %d \n", user01.age);
    printf("user01's first name is %s \n", user01.firstName);
    
    return 0;
}

