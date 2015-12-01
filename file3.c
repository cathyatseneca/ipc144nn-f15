#include <stdio.h>
int main(void){
	FILE* fp;
	char line[200];
	/*fopen opens up a file (first parameter, hello.txt in this case).
	the w means write mode*/
	fp=fopen("hello.txt", "r");
	fscanf(fp,"%[^\n]\n",line);

	printf("%s\n",line);
	//close file to ensure data is properly saved
	//into file
	fscanf(fp,"%[^\n]\n",line);

	printf("%s\n",line);

	fclose(fp);
	return 0;
}