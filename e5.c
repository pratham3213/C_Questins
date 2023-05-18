//Write pseudo code that will count all the even numbers up to a user defined stopping point.

#include <stdio.h>

int main(){
    int num1;
    printf("Enter the stopping point for the loop: ");
    scanf("%d",&num1);

    int i;
    for (i=0;i<=num1;i++){
        if (i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}