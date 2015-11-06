#include <stdio.h>
void doSomething(int array[], int size);
int main(void){
	int size=5;
	int myArray[10] = {2,6,3,7,1 };
	int i;
	printf("sizeof(size): %lu\n", sizeof(size));
	printf("sizeof(myArray): %lu\n", sizeof(myArray));

	doSomething(myArray,size);
	printf("size: %d\n",size);
	for(i=0;i<5;i++){
		printf("%d\n",myArray[i]);
	}
}
void doSomething(int array[], int size){
	int i;
	printf("sizeof(size) in doSomething: %lu\n", sizeof(size));
	printf("sizeof(array) in doSomething: %lu\n", sizeof(array));

	for (i=0;i<size;i++){
		array[i]=array[i]+1;
	}
	size=size+1;
}
