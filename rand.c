#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void){
	int i;
	int randNumber;
	srand(time(NULL));

	for(i=0;i<20;i++){
		randNumber=rand()%10 +1;
		printf("%d\n", randNumber);
		
	}	
}