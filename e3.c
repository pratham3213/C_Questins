/*
Write pseudo code that performs the following:
Ask a user to enter a number. 
If the number is between 0 and 10, write the word blue.
If the number is between 10 and 20, write the word red.
if the number is between 20 and 30, write the word green.
If it is any other number, write that it is not a correct color option.
*/
#include <stdio.h>

int main(){
    int num1;
    printf("Enter any number: ");
    scanf("%d",&num1);

    if (num1>=0 && num1<=10)
    {
        printf("Blue");
    } else if (num1>=10 && num1<=20)
    {
        printf("Red");
    } else if (num1>=20 && num1<=30)
    {
        printf("Green");
    } else
    {
        printf("It is not a correct color option");
    }
    return 0;
    
    
    
}    