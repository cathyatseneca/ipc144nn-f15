#include <stdio.h>

int main(void){

	FILE* fp=fopen("data.txt","r");
	char word[50];
	char definition[300];
	char type;
	int rc;
	rc = fscanf(fp,"%[^:]: %[^(](%c)\n",word,definition,&type);
	while(rc== 3){
		printf("%s\n",word);
		printf("%s\n",definition);
		printf("%c\n",type);
		rc=fscanf(fp,"%[^:]: %[^(](%c)\n",word,definition,&type);
	}

	fclose(fp);
	return 0;
}