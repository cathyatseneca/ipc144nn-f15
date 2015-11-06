#include <stdio.h>
/*this function validates user input*/
int validateInput(const char* prompt, int min, int max){
	int input;
	//print prompt:
	printf("%s", prompt);
	scanf(" %d",&input);
	while(....){
		...
		...
	}
	return input;
}

int main(void){
	int input = validateInput("Enter total sought: ", 2,12);
	printf("input is: %d\n",input);

	input = validateInput("Enter a birth month: ", 1, 12);
	printf("input is: %d\n",input);
	input = validateInput("Enter the day of month you were born: ", 1, 31);
	printf("input is: %d\n",input);

}