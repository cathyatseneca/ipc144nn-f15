#include <stdio.h>


int min(int array[],int size);
int main(void){
	int size;
	int myArray[10];
	int i;

	printf("how many numbers do you want to enter:");
	scanf("%d", & size);

	for(i=0;i<size;i++){
		printf("enter value %d: ", i+1);
		scanf("%d", &myArray[i]);
	}

	printf("size: %d\n",size);
	for(i=0;i<size;i++){
		printf("%d\n",myArray[i]);
	}	
}

/*this function returns the smallest number within the
array*/
int min(int array[],int size){

}


