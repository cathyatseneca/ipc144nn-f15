#include <stdio.h>
int main(void){
	int input;
	printf("Please enter a number: ");
	scanf("%d",&input);

	if(input%2 == 1){
		printf("this is odd\n");
//		printf("this is not even\n")

	}
	else{
		printf("this is not odd\n");
//		printf("this is even\n")

	}
}