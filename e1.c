//Write pseudo code that reads two numbers and multiplies them together and print out their products.

#include <stdio.h>

int main(){
	int num1;
	int num2;
    printf("First Integer: ");
	scanf("%d",&num1);
	printf("Second Number: ");
	scanf("%d",&num2);
	printf("The result of the multiplication of the number %d and %d is: %d",num1,num2,num1*num2);
	return 0;
}