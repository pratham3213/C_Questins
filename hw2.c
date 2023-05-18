//Write pseudo code that will calculate a running sum. A user will enter numbers that will be added to the sum and when a negative number is encountered, stop adding numbers and write out the final result.

#include <stdio.h>

int main(){

    int a=0,sum,num,count=1;

    while (a==0)
    {
        printf("Enter The Number%d: ",count);
        scanf("%d",&num);
        if (num>=0)
        {
            sum+=num;
        }
        else
        {
            printf("\nSum:- %d",sum);
            break;
        }
        count+=1;
    }
    
}