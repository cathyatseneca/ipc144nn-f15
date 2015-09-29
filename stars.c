#include <stdio.h>
/* write a program that will ask the user
for a number.  The program will then print
that many * symbols on one line*/
int main(void){
	int numToPrint;
	printf("enter how many stars to print: ");
	scanf("%d",&numToPrint);
	while(numToPrint>0){
		printf("*");
		numToPrint=numToPrint-1;
	}
	printf("\n");
	return 0;
}
