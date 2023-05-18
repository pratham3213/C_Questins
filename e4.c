//Write pseudo code to print all multiples of 5 between 1 and 100 (including both 1 and 100).

#include <stdint.h>

int main(){
    printf("Mutiples of 5 between 1-100 are:- \n");

    int i;
    for (i=1;i<=100;i++){
        if (i%5==0){
            printf("%d \n",i);
        }
    }
    return 0;
}