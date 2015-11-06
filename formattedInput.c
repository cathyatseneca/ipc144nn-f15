#include <stdio.h>
/*this function validates user input*/
int validateInput(const char* prompt){
	int input;
	int rc;
	//print prompt:
	printf("%s", prompt);
	rc=scanf("%d",&input);
	if(rc == 1){
		printf("input was an integer!\n");
	}
	else{
		printf("input was bad\n");		
	}
	return input;
}

int main(void){
	int input = validateInput("Enter total sought: ");
	printf("input is: %d\n",input);


}