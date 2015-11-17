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
	
}