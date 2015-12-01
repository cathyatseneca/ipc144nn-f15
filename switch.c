#include <stdio.h>

int main(void){
	char choice;
	printf("enter choice: ");
	scanf(" %c",&choice);

	switch(choice){
		case 'A':
		case 'a': 	printf("choice was a\n"); 
					break;
		case 'B':
		case 'b': 	printf("choice was b\n"); 
					break;
		case 'C':
		case 'c': 	printf("choice was c\n"); 
					break;

		default:	printf("wrong input\n");
	};

}