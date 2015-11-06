#include <stdio.h>
void doSomething(int array[], int size);
int main(void){
	int size=5;
	int myArray[5] = {2,6,3,7,1 };
	int i;

	doSomething(myArray,size);
	printf("size: %d\n",size);
	for(i=0;i<5;i++){
		printf("%d\n",myArray[i]);
	}
}
void doSomething(int array[], int size){
	int i;
	for (i=0;i<size;i++){
		array[i]=array[i]+1;
	}
	size=size+1;
}
