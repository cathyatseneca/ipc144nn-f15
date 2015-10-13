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
	int lastDigit = changeAmt % 10;
	if(lastDigit >=3 && lastDigit <=7){
		changeAmt = changeAmt / 10 * 10 + 5;
	}
	else{
		if(lastDigit ==8 || lastDigit ==9){
			changeAmt=changeAmt/10*10+10;
		}
		else{
			changeAmt = changeAmt/10*10;
		}
	}
	return changeAmt;
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
	nl = changeAmt/100;
	changeAmt = changeAmt - nl*100;
	//calculate number of quarters
	nq= changeAmt/25;
	changeAmt = changeAmt - nq*25;
	//calculate number of dimes
	nd = changeAmt/10;
	changeAmt = changeAmt - nd*10;
	//calculate number of nickels
	nn = changeAmt/5;

	*numQuarters = nq;
}



}
