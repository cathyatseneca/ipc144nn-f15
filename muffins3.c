#include <stdio.h>

int main(void){
	int quantity;
	float subtotal;
	float taxes;
	float total;

	//ask user for how many muffins
	printf("How many muffins would you like? ");

	//read in quantity
	scanf("%d",&quantity);

	//calculate subtotal
	subtotal = quantity * 1.49;

	taxes = (quantity < 6)?subtotal * 0.13:0;
	//THE WRONG WAY.  DO NOT DO BELOW METHOD!
	//(quantity < 6)?taxes = subtotal *0.13: taxes = 0;

	//calculate total
	total = subtotal + taxes;

	//print total
	printf("Total is: %.2f\n",total);

	return 0;
}