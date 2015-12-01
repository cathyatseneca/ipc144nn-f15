#include <stdio.h>

int main(void){
	int input;
	do{
		printf("please enter a number between 1 and 10:");
		scanf("%d",&input);
	}while(input < 1 || input > 10);
	printf("you entered %d\n",input);
}