#include <stdio.h>
/*this function validates user input*/
void validateInput(const char* prompt,int* before, int* after){
	int input1,input2;
	int rc;
	//print prompt:
	printf("%s", prompt);
	rc=scanf("%d.%d",&input1, & input2);
	if(rc == 2){
		printf("input was good!\n");
		*before=input1;
		*after = input2;
	}
	else{
		printf("input was bad\n");		
	}

}

int main(void){
	int before;
	int after;
	validateInput("Enter a decimal number: ", &before, &after);
	printf("input is: %d\n",before);
	printf("input is: %d\n",after);


}