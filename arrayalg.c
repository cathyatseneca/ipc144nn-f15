#include<stdio.h>
/*this function returns the index of the element in array that
has same value as key.  The array has sz elements in it.  Function
returns -1 if key is not found*/
int linearSearch(int key, int array[],int sz){
	int i;
	int rc=-1;
	for(i=0;i<sz && rc==-1 ;i++){
		if(array[i] == key){
			rc=i;
		}
	}
	return rc;
}
/*this function sorts an array from small to big*/
void bubbleSort(int array[],int sz){

	int i,j;
	int temp;
	for(i=0;i<sz-1;i++){
		for(j=0;j<sz-1-i;j++){
			if(array[j] > array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}
int main(void){

	int array[10]={5,3,2,1,4,6,9,8,10,7};
	int i;
	bubbleSort(array,10);
	for(i=0;i<10;i++){
		printf("%d\n",array[i]);
	}
}