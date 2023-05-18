//Write pseudo code that reads in three numbers and writes them all in sorted order.

#include <stdio.h>


int main(){

    int a[3],i;

    for (i=0;i<3;i++){
        printf("Enter Number%d: ",i+1);
        scanf("%d",&a[i]);

    }

    int temp,j;
    for (i=0;i<3;i++){
        for (j=i+1;j<3;j++){
            if (a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("\nSorted list as: \n");

    for (i=0;i<3;i++){
        printf("%d\n",a[i]);
    }

    return 0;
}