#include <stdio.h>
/* write a program that will ask the user
for a number.  The program will then print
a square with that many * symbols on one line
and that many lines.

For example if number was 3, program prints:

***
***
***

if number was 5, program prints:

*****
*****
*****
*****
*****

*/

void printLineOfStars(int numStars);
int main(void){
	int numToPrint;
	int i;
	int j;

	printf("enter how many stars to print: ");
	scanf("%d",&numToPrint);
	//the loop counter is named i.
	//it is initialized to 0.
	for( i=0;i<numToPrint;i++){
		printLineOfStars(numToPrint);
	}



	return 0;
}

void printLineOfStars(int numStars){
	int i;
	for(i=0;i<numStars;i++){
		printf("*");

	}
	printf("\n");
}


