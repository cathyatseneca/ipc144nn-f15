#include <stdio.h>
#include <string.h>
int main(void){
	char str[20]="abc";
	char str2[20]="ghi";
	printf("%s\n",str);

	/*str = "def";*/
	strcpy(str, "def");
	printf("%s\n",str);

	/*str=str+str2*/
	strcat(str,str2);
	printf("%s\n",str);

	printf("length of string is: %lu\n", strlen(str));


	int cmp = strcmp("apple","banana");
	printf("apple vs cat: %d\n",strcmp("apple","cat"));
	printf("banana vs apple: %d\n",strcmp("banana","apple"));
	printf("apple vs apple: %d\n",strcmp("apple","apple"));

}












