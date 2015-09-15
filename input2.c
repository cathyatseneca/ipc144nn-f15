//This program asks the user to enter two numbers.
//It will then print out the numbers and their sum.

#include <stdio.h>
int main(void){
	int num1;
	int num2;
	printf("please enter a number: ");
	scanf("%d",&num1);
	printf("please enter a number: ");
	scanf("%d",&num2);
	printf("%d + %d= %d \n",num1,num2, num1 + num2);
}
