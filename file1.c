#include <stdio.h>
int main(void){
	FILE* fp;
	/*fopen opens up a file (first parameter, hello.txt in this case).
	the w means write mode*/
	fp=fopen("hello.txt", "w");
	fprintf(fp,"glunk glunk went the little green frog last night!\n");

	//close file to ensure data is properly saved
	//into file
	fclose(fp);
	return 0;
}