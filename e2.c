//Write pseudo code that tells a user that the number they entered is not a 5 or 6.

#include <stdio.h>

int main(){
    int num1;
    printf("Enter a number: ");
    scanf("%d",&num1);
    if (num1==5 || num1==6){
        printf("The number you have entered is %d", num1);
    }else{
        printf("The number you have entered is %d which is neither 5 or 6",num1);
    }
    return 0;
}