#include <stdio.h>
int main(void){
	FILE* fp;
	/*fopen opens up a file (first parameter, hello.txt in this case).
	the w means write mode*/
	fp=fopen("hello.txt", "a");
	fprintf(fp,"the wheel on the bus goes round and round\n");

	//close file to ensure data is properly saved
	//into file
	fclose(fp);
	return 0;
}