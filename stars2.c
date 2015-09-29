#include <stdio.h>
/* write a program that will ask the user
for a number.  The program will then print
that many * symbols on one line*/
int main(void){
	int numToPrint;
	printf("enter how many stars to print: ");
	scanf("%d",&numToPrint);
	//the loop counter is named i.
	//it is initialized to 0.
	for(int i=0;i<numToPrint;i++){
		printf("*");
	}


	printf("\n");
	return 0;
}
