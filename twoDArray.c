#include <stdio.h>
void printArray(const int array[],int size);
int main(void){
	int puzzle[4][3]={
		{1,2,3},
		{4,5,6},
		{7,8,9},
		{10,11,12}
	};

	printf("%d\n",puzzle[0][0]);
	printf("%d\n",puzzle[1][2]);
	printf("%d\n",puzzle[3][2]);
	printArray(puzzle[2],3);

}

void printArray(const int array[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d",array[i]);
	}
	printf("\n");
}