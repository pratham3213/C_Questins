/*
Write pseudo code that will perform the following.

a) Read in 5 separate numbers.

b) Calculate the average of the five numbers.

c) Find the smallest (minimum) and largest (maximum) of the five entered numbers. d) Write out the results found from steps b and c with a message describing what they are
*/
#include <stdio.h>

int minimum(int a[],int n)
{
    int i;
    int min=0;
    for (i=0;i<5;i++){
        if(i<n)
        {
            if(a[min]>a[i])
            {
                min=i;
            }
        }
    }
    return min;
}
int maximum(int a[],int n)
{
    int i;
    int max=0;
    for (i=0;i<5;i++){
        if(i<n)
        {
            if(a[max]<a[i])
            {
                max=i;
            }
        }
    }
    return max;
}

int main(){
    
    int counter,arr1[5],j, max, min;

    max=min=arr1[0];
    for (j=1;j<=5;j++){
        printf("\nEnter the Number%d: ",j);
        scanf("%d",&arr1[j]);
        counter+=arr1[j];

    }
    counter=counter/j;
    printf("\nAverage of all Values entered is: %d",counter);

    printf("\nminimum of array is : %d",arr1[(minimum(arr1,5))]);
    printf("\nmaximum of array is : %d",arr1[(maximum(arr1,5))]);


}