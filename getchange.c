#include <stdio.h>

void getChange(int changeAmt,int* numLoonies,
				int* numQuarters,int* numDimes, int* numNickels);

//this function rounds the changeAmt to nearest 5 cents
int roundChange(int changeAmt);
int main(void){

	int numL,numQ,numD, numN;

	getChange(93,&numL,&numQ,&numD,&numN);
	printf("change for 93 cents is:\n");
	printf("loonies: %d\n",numL);
	printf("quarters: %d\n",numQ);
	printf("dimes: %d\n",numD);
	printf("Nickels: %d\n",numN);
}
//this function rounds the changeAmt to nearest 5 cents
int roundChange(int changeAmt){
	//this is a stub function.  It doesn't really work. 
	//however it gives an expected result so that other code
	//can be written and tested.
	return 95;
}

void getChange(int changeAmt,int* numLoonies,
				int* numQuarters,int* numDimes, int* numNickels){

	int nl;
	int nq;
	int nd;
	int nn;

	//step 1: round the pennies
	changeAmt = roundChange(changeAmt);
	//calculate number of loonies
	nl = ???
	//calculate number of quarters
	nq=???
	//calculate number of dimes
	nd = ???
	//calculate number of nickels
	nn = ???

}



}
